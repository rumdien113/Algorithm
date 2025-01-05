N = 10**5+5
res = 0
a = [0] * N
ans = [0] * N

a[0] = 0
a[1] = 1
ans[1] = 1
for i in range(N):
    if 2*i < N:
        a[2*i] = a[i]
    if 2*i+1 < N:
        a[2*i+1] = a[i] + a[i+1]
    res = max(res, a[i])
    ans[i] = res

t = int(input())
for _ in range(t):
    n = int(input())
    print(ans[n])
