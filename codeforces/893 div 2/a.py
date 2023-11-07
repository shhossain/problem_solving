import math as m

for _ in range(int(input())):
    a,b,c = map(int, input().split())
    v = m.ceil(c/2)
    v2 = c-v+b
    v+=a
    if v > v2:
        print("First")
    else:
        print("Second")
    