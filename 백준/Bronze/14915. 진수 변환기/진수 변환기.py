n, m = map(int, input().split())
if(n==0):
    print(0)
else:
    t = 1
    while(n >= t):t*=m
    t= t//m
    while(t):
        print(n//t if n//t < 10 else chr(ord('A') + n//t - 10), end ='')
        n%=t
        t=t//m
