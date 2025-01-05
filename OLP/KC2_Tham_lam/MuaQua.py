n, m = map(int, input().split())
a = list(map(int, input().split()))
a = sorted(a)
ans = 10**9
# print(a)
for i in range(0, n-m+1):
    # print(f"ans: {ans} | a[i+m-1]: {a[i+m-1]} | a[i]: {a[i]} | a[i+m]-a[i]: {a[i+m-1]-a[i]}")
    ans = min(ans, abs(a[i] - a[i+m-1]))
print(ans)
