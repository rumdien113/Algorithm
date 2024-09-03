for _ in range(int(input())):
    n = int(input())
    s = input()
    i = 0
    while(i < n and s[i] == '1'):
        i += 1
    if (i == n):
        if (i == 4):
            print("YES")
        else:
            print("NO")
        continue
    i -= 1
    if (i*i == n):
        print("YES")
    else:
        print("NO")
