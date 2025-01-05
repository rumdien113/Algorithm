a, b = input(), input()
aa = {}
bb = {}
ans = 0
for i in a:
    if i in aa:
        aa[i] += 1
    else:
        aa[i] = 1
for i in b:
    if i in bb:
        bb[i] += 1
    else:
        bb[i] = 1
for i in aa:
    if i in bb:
        ans += min(aa[i], bb[i])
print(ans)
