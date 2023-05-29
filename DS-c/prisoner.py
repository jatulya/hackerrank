def prisoner(n,m,k):
    
    w = k
    
    for i in range(1, m):
        
        w = (w+1)%n
        if w == 0:
            w = n
            
    return w

cases = int(input())

for i in range(cases):
    
    n, m, k = map(int, input().split())
    print(prisoner(n,m,k))