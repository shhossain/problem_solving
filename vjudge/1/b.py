n, m = map(int, input().split())
mp = []
for i in range(m):
    a, b = map(int, input().split())
    mp.append([a, b])

mp.sort(key=lambda x: x[1], reverse=True)


ans = 0
for i in range(m):
    if n >= mp[i][0]:
        ans += mp[i][1] * mp[i][0]
        n -= mp[i][0]
    else:
        ans += mp[i][1] * n
        break
print(ans)
