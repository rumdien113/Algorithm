s = input().strip().split()
n = int(input().strip())
val = input().strip().split()

def sol():
    res = ''
    for i in s:
      for j in val:
        replace = '*' * len(j)
        if i.lower() == j.lower():
          res += replace + ' '
          break
        else:
          res += i + ' '
          break
    print(res)
sol()