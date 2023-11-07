a = int(input())
ans = -1
for i in range(1,17):
    if i**i == a:
        ans = i
        break
print(ans)