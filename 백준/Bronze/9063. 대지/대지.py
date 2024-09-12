n = int(input())

x = []
y = []
for _ in range(n):
    x1,y1 = map(int,input().split())
    x.append(x1)
    y.append(y1)
    
print ((max(x)-min(x)) * (max(y)-min(y)))
