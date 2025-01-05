n = int(input())
a = list(map(int, input().split()))
ans = [-1] * (max(a) + 5)
res = 0
for i in a:
    ans[i] += 1
    res += ans[i] 
print(res)
