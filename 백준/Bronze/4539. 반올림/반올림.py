def half(num):
    a = 10
    
    while num >= a:
        new = num % a
        if new >= a // 2:
            num += a - new
        else:
            num -= new
        a *= 10
    
    return num

n = int(input())

for i in range(n):
    num = int(input())
    print(half(num))
