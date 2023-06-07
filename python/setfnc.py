num = int(input())
numSet = set(map(int, input().split()))
numCom = int(input())

for i in range(numCom):
    
    cmd = input().split()
    
    try:
        if cmd[0] == 'pop':
            numSet.pop()
        if cmd[0] == 'remove':
            numSet.remove(int(cmd[1]))
        if cmd[0] == 'discard':
            numSet.discard(int(cmd[1]))
    except: 
        pass 

print(sum(numSet))