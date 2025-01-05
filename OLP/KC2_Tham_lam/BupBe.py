n, k = map(int, input().split())
a = list(map(int, input().split()))
a = sorted(a)
ans = 0
for i in range(n-1, 0, -1):
    ans += a[i]
    for j in range(i-1, 0, -1):
        if a[i] >= a[j]+k:
            ans -= a[j]
            break
print(ans)
