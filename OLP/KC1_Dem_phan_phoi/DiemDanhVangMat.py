n, m = map(int, input().split())
a = list(map(int, input().split()))
ans = [0] * (n+1)
for i in a:
    ans[i] = 1
for i in range(1, n+1):
    if ans[i] == 0:
        print(i, end=' ')
