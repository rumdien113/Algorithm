from collections import deque
import sys
sys.stdin = open('MINIMUM.INP', 'r')
sys.stdout = open('MINIMUM.OUT', 'w')
n, k = map(int, input().split())
a = list(map(int, input().split()))

dq = deque()
mi = {}
ans = []

for i in range(n):
    while dq and dq[-1]>a[i] 
    
    
for i in ans:
    print(i, end=' ')
