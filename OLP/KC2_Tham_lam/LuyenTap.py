n, c = map(int, input().split())
a = []
for _ in range(n):
    x, y = map(int, input().split())
    a.append((x, y))
a = sorted(a)
ans = 0
for i in a:
    if c < i[0]:
        break
    ans += 1
    c += i[1]
print(ans)
