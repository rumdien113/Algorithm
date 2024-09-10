a, b = map(int, input().split())

def gcd(a, b):
    while(b != 0):
        tmp = b
        b = a % b
        a = tmp
    return a

print(gcd(a, b))
