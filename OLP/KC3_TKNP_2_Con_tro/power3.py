t = int(input())
while t > 0:
    n = int(input())
    tmp = n ** (1/3)
    if (int(tmp + 0.5)) ** 3 == n:
        print("YES")
    else:
        print("NO")
    t -= 1
