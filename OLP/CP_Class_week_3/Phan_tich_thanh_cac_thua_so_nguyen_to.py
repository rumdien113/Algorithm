def seive(n):
    a = [True] * (n + 1)
    a[0] = a[1] = False
    for i in range(2, int(n ** 0.5) + 1):
        if a[i]:
            for j in range(i * i, n + 1, i):
                a[j] = False
    return [i for i in range(2, n + 1) if a[i]]

n = int(input())
prime = seive(int(n**0.5)+1)

for i in prime:
    if i * i > n:
        break
    cnt = 0
    while n % i == 0:
        cnt += 1
        n //= i
    if cnt:
        print(i, cnt)
if n > 1:
    print(n, 1)
