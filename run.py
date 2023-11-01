import subprocess
from pathlib import Path
import os
import argparse
import difflib
import shlex
import re
import time

lang_ext = {
    ".py": "python",
    ".cpp": "cpp",
    ".c": "c",
}

cmd = {
    "cpp": "g++",
    "c": "gcc",
}

if os.name == "nt":
    cmd["python"] = "python"
else:
    cmd["python"] = "python3"


def run(cmd: str, input: str, timeout: int) -> str:
    process = subprocess.Popen(
        cmd,
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        shell=True,
    )
    try:
        output, error = process.communicate(input.encode(), timeout=timeout)
        output = output.decode(encoding='utf-8')
        error = error.decode()
        if error:
            raise Exception(error)
        # output = re.sub(r'[^\x20-\x7E]+', '', output)
        return output.replace("\r\n", "\n")
    except subprocess.TimeoutExpired:
        process.kill()
        raise Exception("Time limit exceeded")

def stem(file: str) -> str:
    return re.sub(r"\W+", "_", file)

def run_cpp(file: str, input: str, timeout: int) -> str:
    file = Path(file)
    return run(f'''cd "{file.parent}" && {cmd['cpp']} "{file.name}" -o {stem(file.stem)} && {stem(file.stem)}.exe''', input, timeout)


def run_c(file: str, input: str, timeout: int) -> str:
    file = Path(file)
    return run(f'''cd "{file.parent}" && {cmd['c']} "{file.name}" -o {stem(file.stem)} && {stem(file.stem)}.exe''', input, timeout)


def run_python(file: str, input: str, timeout: int) -> str:
    return run(f'''{cmd['python']} "{file}"''', input, timeout)


def get_parser():
    parser = argparse.ArgumentParser(description="Run code")
    parser.add_argument("file", type=str, help="File to run")
    parser.add_argument("-i", "--input", type=str, help="Input file or text")
    parser.add_argument("-o", "--output", type=str, help="Output file")
    parser.add_argument("-a", "--answer", type=str, help="Expected output file or text")
    parser.add_argument("-t", "--timeout", type=int, default=5, help="Timeout")
    return parser


def process():
    parser = get_parser()
    args = parser.parse_args()

    if not args.input:
        if Path("input.txt").exists():
            args.input = "input.txt"
    if not args.output:
        if Path("output.txt").exists():
            args.output = "output.txt"
    if not args.answer:
        if Path("answer.txt").exists():
            args.answer = "answer.txt"
    

    file = Path(args.file)
    lang = lang_ext[file.suffix]
    code = file.read_text()
    if code.startswith("#!") or code.startswith("//!"):
        sargs = code.split("\n", 1)[0].replace("#!", "").replace("//!", "")
        p2 = argparse.ArgumentParser()
        p2.add_argument("-i", "--input", type=str, help="Input file or text")
        p2.add_argument("-o", "--output", type=str, help="Output file")
        p2.add_argument("-a", "--answer", type=str, help="Expected output file or text")
        p2.add_argument("-t", "--timeout", type=int, default=5, help="Timeout")
        nargs = p2.parse_args(shlex.split(sargs))._get_kwargs()
        for k, v in nargs:
            if v:
                setattr(args, k, v)

    input_text = ""
    if args.input:
        if Path(args.input).exists():
            input_text = Path(args.input).read_text()
        else:
            input_text = args.input

    start = time.time()
    if lang == "python":
        output = run_python(file, input_text, args.timeout)
    elif lang == "cpp":
        output = run_cpp(file, input_text, args.timeout)
    elif lang == "c":
        output = run_c(file, input_text, args.timeout)
    else:
        raise Exception("Unknown language")
    
    print(f"Time: {time.time() - start:.3f}s")

    out = True
    if args.output:
        Path(args.output).write_text(output)
        out = False

    if args.answer:
        answer = ""
        if Path(args.answer).exists():
            answer = Path(args.answer).read_text()
        else:
            answer = args.answer

        if answer != output:
            print("Wrong answer")
            print("Diff:")
            for i in difflib.unified_diff(
                answer.split("\n"), output.split("\n")
            ):
                print(i)

    if out:
        print(output)


if __name__ == "__main__":
    process()
