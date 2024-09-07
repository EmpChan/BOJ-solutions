I=input
L=list
s=L(I())
a=L(I())
while len(s)<len(a):
 if a[-1]=='A':a.pop()
 else:a.pop();a=L(reversed(a))
print(int(a==s))