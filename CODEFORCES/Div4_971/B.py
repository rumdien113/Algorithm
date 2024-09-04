for _ in range(int(input())):
    n = int(input())
    a = []
    for _ in range(n):
        s = input()
        a.append(s.find('#') + 1)
    a.reverse()
    for i in range(len(a)):
        print(a[i], end=' ')
    print()
