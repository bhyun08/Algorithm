x = []
for _ in range(3):
    x1 = int(input())
    x.append(x1)

answer=''
if x[0]+x[1]+x[2] < 180 or x[0]+x[1]+x[2] > 180:
    answer = "Error"
elif x[0] != x[1] and x[0] != x[2] and x[1] != x[2]:
    answer = "Scalene"
elif x[0] == 60 and x[1] == 60 and x[2] == 60:
    answer="Equilateral"
elif x[0] == x[1] or x[0] == x[2] or x[1] == x[2]:
    answer = "Isosceles"

print(answer)