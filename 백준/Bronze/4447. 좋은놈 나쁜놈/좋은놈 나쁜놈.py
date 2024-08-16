n = int(input())

for _ in range(n):
    s = input()
    
    g = s.lower().count('g')
    b = s.lower().count('b')
    
    if g > b:
        print(s + " is GOOD")
    elif g == b:
        print(s + " is NEUTRAL")
    else:
        print(s + " is A BADDY")