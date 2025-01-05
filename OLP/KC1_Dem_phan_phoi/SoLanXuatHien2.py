n = int(input())
a = list(map(int, input().split()))
ans = {}
for i in a:
    if i in ans:
        ans[i] += 1
    else:
        ans[i] = 1
for i in sorted(ans.keys()):
    print(i, ans[i])
