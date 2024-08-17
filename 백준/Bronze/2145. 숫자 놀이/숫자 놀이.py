import sys

while True:
    n = input()
    
    if n == '0':
        sys.exit()
            
    while len(n) > 1:  
        s = 0 
        for i in range(len(n)):
            s += int(n[i])
        n = str(s) 
    
    print(n)  
