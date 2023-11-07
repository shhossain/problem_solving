g = []
for _ in range(9):
    g.append(list(map(int, input().split())))

ans = 0
for r in g:
    if len(set(r)) != 9:
        ans += 1
for c in zip(*g):
    if len(set(c)) != 9:
        ans += 1
for i in range(0, 9, 3):
    for j in range(0, 9, 3):
        s = g[i][j:j+3] + g[i+1][j:j+3] + g[i+2][j:j+3]
        if len(set(s)) != 9:
            ans += 1
print("Yes" if ans == 0 else "No")