n = int(input())
a = []
for _ in range(n):
    x = int(input())
    a.append(x)
a = sorted(a, reverse=True)
sum = 0
cnt = 0
for i in a:
    sum += i
    cnt += 1
    if cnt == 3:
        sum -= i
        cnt = 0
print(sum)
