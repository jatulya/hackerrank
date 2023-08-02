from collections import Counter

s = input()

result = Counter(sorted(s)).most_common(3)

for k, val in result:
    print(k, val)

'''
the working behind this above code
    s = input()
    
    newS = sorted(s)
    occur = {}
    i = 0
    l = len(newS)
    
    while(i<l):
        ch = newS[i]
        c = 0
        
        for j in range(i,l):
            if ch == newS[j]:
                c += 1
            else: 
                break
            
        occur[ch] = c
        i+=c
    
    i = 0
    while(i<3):
        largest = max(occur.values())
        for k, val in occur.items():
            if largest == val:
                if i<3:
                    print(f"{k} {val}")
                    i += 1
                    occur[k] = -1
                else:
                    break
        
'''