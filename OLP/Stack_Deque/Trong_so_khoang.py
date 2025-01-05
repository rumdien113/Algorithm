import sys
sys.stdin = open('WEIGHT.INP', 'r')
sys.stdout = open('WEIGHT.OUT', 'w')
n = int(input())
a = list(map(int, input().split()))
ans = 0
for i in range(n):
    mi = a[i]
    mx = a[i]
    for j in range(i, n):
        if a[j] < mi: mi = a[j]
        if a[j] > mx: mx = a[j]
        ans += mx - mi 
print(ans)
