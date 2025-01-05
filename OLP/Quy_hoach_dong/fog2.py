n, k = map(int, input().split())
a = list(map(int, input().split()))
INT = 10**9+7
ans = 0
dp = [INT] * (n+1)
dp[0] = 0
for i in range(n):
    mi = INT
    for j in range(i+1, i+k+1):
        if j < n:
            dp[j] = min(dp[j], dp[i] + abs(a[j]-a[i]))
print(dp[n-1])
