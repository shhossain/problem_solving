def is_pos(x, y):
    x = str(x)
    y = str(y)
    j = 0
    for i in range(len(x)):
        if j >= len(y):
            return True
        if x[i] == y[j]:
            j += 1

    if j == len(y):
        return True
    else:
        return False


for _ in range(int(input())):
    n = int(input())
    ll = str(n)
    if n % 25 == 0:
        print(0)
        continue
    else:
        l = len(str(n)) - 1
        while l > 0:
            nm = int("4" + "0" * (l - 3)) * 25
            nm2 = int("4" + "0" * (l - 2)) * 25
            print(nm, nm2)

            j = nm
            while j <= nm2:
                if is_pos(n, j):
                    print(ll - l)
                    break

                j += 25

            l -= 1
