def climbClouds(n,k,p):
    
    e = 100
    i = 0
    
    while True:
        
        e -= 1
        
        if p[i] == 1:
            e -= 2
        
        i = (i+k)%n
        
        if i == 0:
            break
            
    return e
    
n, k = map(int, input().split())
clouds = list(map(int, input().split()))
print(climbClouds(n,k,clouds))