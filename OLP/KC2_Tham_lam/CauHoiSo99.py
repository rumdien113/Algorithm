n = int(input())
ans = ''
if n <= 9:
    ans = n
else:
    num = n // 9
    n %= 9
    if n != 0:
        ans += str(n)
    for i in range(0, num):
        ans = ans + '9'
print(ans)
