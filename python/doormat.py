def designup ( x, y):
    
    for i in range(1,x):
        
        ch = ".|."
        if(i%2==0): 
            continue
        else:
            print((ch*i).center((y),'-'))

def designcenter(y):
    print("WELCOME".center(y,'-'))

def designdown(x, y):
    
    for i in range(1,x):
        
        ch = ".|."
        if(i%2==0): 
            continue
        else:
            print((ch*(x-i-1)).center((y),'-'))
                
x = list(map(int, input().split()))

designup(x[0],x[1])
designcenter(x[1])
designdown(x[0], x[1])
