n,m = map(int, input().split())
a,b = n//m, n%m
if n != 0 and b < 0:
    a, b = a+1, b-m
print(a)
print(b)
