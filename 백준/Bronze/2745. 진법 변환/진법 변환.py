N, B = input().split()
arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

N = N[::-1]
result = 0
for i,n in enumerate(N):
    result += (int(B)**i)*(arr.index(n))
print(result)