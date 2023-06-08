
int(input())
nums = list(map(int, input().split()))

sticks = []

while(nums != []):
    
    mini = min(nums)

    for i in range(len(nums)):
        nums[i] -= mini
      
    sticks.append(len(nums))
    nums = [x for x in nums if x!=0]
    
for i in sticks:
    print(i)
