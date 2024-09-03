n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    if ((a + 2*b) & 1):
        print("NO")
    elif (a == 0 and b & 1):
        print("NO")
    else:
        print("YES")
