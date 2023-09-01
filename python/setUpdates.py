input()  #no. of elements in the original set
set1 = set(map(int, input().split())) #reading the elements and turning into a set
m = int(input())

while(m):
    cmd = input().strip().split()[0]
    set2 = set(map(int, input().split()))
    if cmd[0]=='i':
        set1.intersection_update(set2)
    elif cmd[0]=='u':
        set1.update(set2)
    elif cmd[0]=='d':
        set1.difference_update(set2)
    else:
        set1.symmetric_difference_update(set2)    
    m -= 1

sum = 0
for i in set1:
    sum += i
print(sum)
