n = int(input())
a = list(map(int, input().split()))
ans = [0] * (max(a)+5)
for i in a:
    if ans[i] == 0:
        ans[i] = 1
    else:
        ans[i] += 1
for i in a:
    print(i, ans[i])
