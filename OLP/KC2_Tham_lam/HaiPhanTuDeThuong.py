n = int(input())
a = list(map(int, input().split()))
a.insert(0, 0)
mi = a[1]
mx = 0
l = 1
r, x = 0, 1
for i in range(1, n+1):
    if a[i] < mi:
        mi = a[i]
        x = i
    elif a[i] - mi > mx:
        mx = a[i] - mi
        r = i
        l = x
print(l, r)
print(mx)
