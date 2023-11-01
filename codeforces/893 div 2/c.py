for _ in range(int(input())):
    n = int(input())
    a = [0] * n
    c = 0
    i = 1
    while i <= n:
        j = i
        while j <= n:
            a[c] = j
            c += 1
            j *= 2
        i += 2
    print(*a)
    
    