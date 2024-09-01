import math

a,b,v = map(int,input().split())
n = (v-b) / (a-b)
print(math.ceil(n))