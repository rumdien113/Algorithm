def sol(n, m, a):
    cnt = 0
    sum = 1
    if m == 1:
        return 0
    for i in a:
        if sum >= m:
            break
        sum += i
        sum -= 1
        cnt += 1
    if sum < m:
        return -1
    return cnt

n, m = map(int, input().split())
a = list(map(int, input().split()))
a.sort(reverse = True)
print(sol(n, m, a))    
