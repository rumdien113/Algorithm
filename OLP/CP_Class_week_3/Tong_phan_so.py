a, b, c, d = map(int, input().split())

def gcd(a, b):
    while b != 0:
        tmp = b
        b = a % b
        a = tmp
    return a

a = a * d
c = c * b
b = b * d
d = b
num = a + c
den = b
gc = gcd(num, den)
print(num // gc, den // gc)
