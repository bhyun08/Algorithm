import sys
input = sys.stdin.readline

N = int(input())

A = list(map(str, input().split()))
B = list(map(str, input().split()))

str1 = ''.join(A)
str2 = ''.join(B)

str1 = int(str1)
str2 = int(str2)

if str1 < str2 : 
    print(str1)
elif str1 > str2 : 
    print(str2)
else : 
    print(str1)
