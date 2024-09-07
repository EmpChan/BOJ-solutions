s = list(input())
a = list(input())
while(len(s) < len(a)):
    if a[-1] == 'A':
        a.pop()
    else:
        a.pop()
        a = list(reversed(a))

print(int(a==s))