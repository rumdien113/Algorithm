n = int(input())
dp = [10**6+7] * (n+1)
dp[0] = 0
for i in range(0, n+1):
    tmp = i
    while tmp > 0:
        dp[i] = min(dp[i], dp[i-int(tmp%10)] + 1)
        tmp //= 10
print(dp[n])
