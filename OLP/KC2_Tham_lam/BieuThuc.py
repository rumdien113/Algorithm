n, k = map(int, input().split())
a = list(map(int, input().split()))
a[1:] = sorted(a[1:], reverse=True)
ans = a[0]
for i in range(1, n):
    if k > 0:
        k -= 1
        ans += a[i]
    else:
        ans -= a[i]
print(ans)
