n = int(input())
for i in range(n):
    li = list(map(int, input().split()))
    li.sort()
    if li[0]**2 + li[1]**2 == li[2]**2:
        print("Scenario #" + str(i + 1) + ":")
        print("yes")
        print()
    else:
        print("Scenario #" + str(i + 1) + ":")
        print("no")
        print()