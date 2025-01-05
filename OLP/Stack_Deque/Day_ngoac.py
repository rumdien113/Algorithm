with open('./PARENTHESES.INP', 'r') as fi:
    lines = fi.readlines()

with open('./PARENTHESES.OUT', 'w') as ou:
    n = int(lines[0].strip())
    open = "{[("
    close = ")]}"
    for j in range(1, n+1):
        st = []
        s = lines[j].strip()
        blank = True
        for i in s:
            if i in open:
                st.append(i)
            elif i in close:
                if not st:
                    blank = False
                    break
                t = st.pop()
                if (i == '}' and t != '{') or (i == ']' and t != '[') or (i == ')' and t != '('):
                    blank = False
                    break
        if not st and blank:
            ou.write("YES\n")
        else:
            ou.write("NO\n")

