def divisors(n):
    
    temp = n
    count = 0
    
    while(temp!=0):
        
        d = temp%10
        temp //= 10
        
        if d!=0:
            if n%d == 0:
                count += 1
    
    return count

t = int(input())
nums = []
result = []
for i in range(t):
    nums.append(int(input()))
    result.append(divisors(nums[i]))
    
for i in result:
    print(i)
    

    