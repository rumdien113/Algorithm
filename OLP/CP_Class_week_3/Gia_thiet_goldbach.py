def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True
n = int(input())
for i in range(n // 2, 1, -1):
    if isPrime(i) and isPrime(n - i):
        print(i, n - i)
        break
