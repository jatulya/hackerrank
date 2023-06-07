# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict

od = OrderedDict()

for i in range(int(input())):
    
    item = input().split()
    
    key = ' '.join(item[ :-1])
    price = int(item[-1])

    if key in od:       
        od[key] += price
    else:
        od[key] = price
        
for k, val in od.items():
    print(k, val)
        
    
        
    
    
