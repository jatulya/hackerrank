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
        
    
d2 = list(map(int, input().split()))
d1 = list(map(int, input().split()))

if d2[2]-d1[2] > 0:
    fine = 10000
elif d2[1]-d1[1] > 0:
    fine = 500 * (d2[1]-d1[1])
elif d2[0]-d1[0]:
    fine = 15 * (d2[0]-d1[0])
else:
    fine = 0
    
print(fine)

    
    
