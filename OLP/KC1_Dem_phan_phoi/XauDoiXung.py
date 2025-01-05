s = input()
a = {}
ans = 0
for i in s:
    if i in a:
        a[i] += 1
    else:
        a[i] = 1
for i in a:
    if a[i] & 1:
        ans += 1
print(ans - 1)
