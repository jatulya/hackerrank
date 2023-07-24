n = int(input())

keyPair = {}

while(n):
    key = input()
    
    if key in keyPair:
        keyPair[key] += 1
    else:
        keyPair[key] = 1
    
    n -= 1
    
val = list(keyPair.values())

print(len(val))
for i in val:
    print(i, end=" ")
