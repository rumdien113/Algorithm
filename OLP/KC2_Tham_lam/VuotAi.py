n, k = map(int, input().split())
a = list(map(int, input().split()))
ans = 0
mx = max(a)
for i in a:
    ans += i
if mx > k:
    ans = ans + (mx - k) + 1 - mx
else:
    ans = ans - mx + 1
print(ans)
