import sys
sys.stdin = open('LINEUP.INP', 'r')
sys.stdout = open('LINEUP.OUT', 'w')
n = int(input())
a = list(map(int, input().split()))
ans = [0] * n
st = []
for i in range(n):
    while st and a[st[-1]] <= a[i]:
        st.pop()
    if st:
        ans[i] = st[-1] + 1
    st.append(i)
for i in ans:
    print(ans[i], end=' ')
