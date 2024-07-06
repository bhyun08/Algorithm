a = int(input())
b = int(input())

if(a < 2):
    print("Before")
elif(a > 2):
    print("After")
elif(a == 2):
    if(b == 18):
        print("Special")
    elif(b < 18):
        print("Before")
    else:
        print("After")