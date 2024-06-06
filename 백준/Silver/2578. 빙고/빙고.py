a=[input().split() for i in [0]*5]
row = [5 for i in [0]*5]
col = [5 for i in [0]*5]
left = 5
right = 5
bingo = 0 
for i in range(5):
    t = input().split()
    for j in range(5):
        for p in range(5):
            for q in range(5):
                if(a[p][q] != t[j]):
                    continue
                row[q] -=1
                if row[q]==0:bingo+=1
                col[p] -=1
                if col[p]==0:bingo+=1
                if(p==q):
                    right-=1
                    if right==0:bingo+=1
                if(p+q==4):
                    left-=1
                    if left==0:bingo+=1
                if(bingo>=3):
                    print(i*5+(j+1))
                    exit()

                