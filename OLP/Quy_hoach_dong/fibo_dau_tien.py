n = int(input())
a = [0] * (n+1)
a[0] = 0
a[1] = 1
a[2] = 2
for i in range(3, n+1):
    a[i] = a[i-2] + a[i-1]
for i in range(1, n+1):
    print(a[i], end=' ')
