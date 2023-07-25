from collections import deque

def piled(d):
    
    while(d):
        #popping only the bigger one
        if d[0]>d[-1]:
            large = d.popleft()
        else:
            large = d.pop()
            
        if len(d)==0: 
            return "Yes"
        #if the next extreme is bigger than the last piled cube, then stack is not possible
        if d[-1]>large or d[0]>large: 
            return "No"
    
t = int(input())

while (t):
    
    n = int(input())
    cubes = deque(map(int, input().split()))
    print(piled(cubes))
    t -= 1
    