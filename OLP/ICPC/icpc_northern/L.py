n = int(input())
a = list(map(int, input().split()))
MOD = 10**9+7
mp = [-1] * n
ans = 0
for i in a:
    mp[i] += 1
    ans = ans + mp[i] % MOD
print(ans)
