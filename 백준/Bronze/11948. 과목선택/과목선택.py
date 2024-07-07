li=[]
li_2=[]

for i in range(4):
    li.append(int(input()))
for i in range(2):
    li_2.append(int(input()))
    
li.sort()
li_2.sort()

sm = 0

for i in range(1,4):
    sm += li[i]
sm += li_2[1]
    
print(sm)