a = {}
for i in range(1, 21):
    a.append({i, i**i})
for i in a:
    print(i)
