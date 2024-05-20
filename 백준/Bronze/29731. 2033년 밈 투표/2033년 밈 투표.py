x= ['Never gonna give you up','Never gonna let you down',
     'Never gonna run around and desert you','Never gonna make you cry'
     ,'Never gonna say goodbye','Never gonna tell a lie and hurt you',
     'Never gonna stop']
flag=0
for i in range(int(input())):
    if input() in x:
        continue
    flag=1

if(flag):
    print("Yes")
else:
    print("No")