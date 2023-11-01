for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    v = 0
    for i in range(n):
        v += 1
        if v == arr[i]:
            v += 1
    print(v)