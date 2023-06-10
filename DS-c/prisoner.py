def prisoner(n,m,k):
            
    x = m%n
    w = (x+k-1)%n
   
    if w==0:
        return n
    else: 
        return w

cases = int(input())

for i in range(cases):
    
    n, m, k = map(int, input().split())
    print(prisoner(n,m,k))
    print()