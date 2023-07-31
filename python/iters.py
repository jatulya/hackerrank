from itertools import combinations

n = int(input())
strlist = list(input().split())
k = int(input()) #combination number

indicesOfa = [] #to store the indices of 'a'
for i in range(0,n):
    if strlist[i] == 'a':
        indicesOfa.append(i+1)  #the indices assumed to be started from 1 

indicesCombo = list(combinations(range(1,n+1),k)) #gives diff combination from 1 to n

totalOutcome = len(indicesCombo)
desiredOutcome = 0

for i in indicesCombo: #taking each combination
    for x in i:  #taking element in the combinatio
        if x in indicesOfa:  #if any one element is there in the indices list of 'a'
            desiredOutcome += 1
            break

print(desiredOutcome/totalOutcome)
