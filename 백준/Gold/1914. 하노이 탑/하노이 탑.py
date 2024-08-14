def hanoi(n,a,b,c):
    if(n == 1):
        print(a+" "+c)
        return
    else:
        hanoi(n-1, a,c,b)
        print(a+" "+c)
        hanoi(n-1, b,a,c)

a = int(input())
print((2 ** a)-1)

if(a > 20):
    exit()
else:
    hanoi(a,'1','2','3')


