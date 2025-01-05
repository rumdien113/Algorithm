n = int(input())
a = list(map(int, input().split()))
res = 0
ans = [0] * (max(a) + 5)
for i in a:
    ans[i] += 1
for i in ans:
    res += i // 2
print(ans)
print(res)
