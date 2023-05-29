def reverse(a):
    
    rev = 0
    
    while a>0:
        
        d = a%10
        rev = rev*10 + d
        a = a//10
    
    return rev

def beautifulDays(i, j, k):
    
    days = 0
    
    for a in range (i,j+1):
        
        diff = abs(a - reverse(a))
        if diff%k == 0:
            days+=1
    
    return days

inputs = list(map(int, input().rstrip().split()))
print(beautifulDays(inputs[0], inputs[1], inputs[2]))