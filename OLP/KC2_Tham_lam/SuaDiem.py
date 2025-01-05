n = int(input())
a = list(map(float, input().split()))
mi = 11.0
sum = 0.0
for i in a:
    sum += i
    mi = min(mi, i)
sum = sum - mi + 10.0
print(sum)
