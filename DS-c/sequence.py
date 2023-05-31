def perEq(n, p):
    
    result = []
    
    for x in range(1,n+1):
        for j in range(0,n):
            if p[p[j]-1] == x:
                result.append(j+1)
                break
    
    return result
    
n = int(input())
p = list(map(int, input().split()))
output = perEq(n,p)

for i in output:
    print(i)