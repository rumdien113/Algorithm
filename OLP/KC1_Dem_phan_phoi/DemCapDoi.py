n, x = map(int, input().split())
a = list(map(int, input().split()))
res = 0
ans = {}
for i in a:
    if i in ans:
        ans[i] += 1
    else:
        ans[i] = 1
for i in range(1, (x//2)+1):
    if i in ans:
        if i == x//2 and x % 2 == 0:
            res += (ans[i] * (ans[i] - 1)) // 2
        else:
            if x-i in ans:
                res += ans[i] * ans[x-i]
print(res)
