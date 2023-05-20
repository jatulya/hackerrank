t = 5
c = "H"

def topcone():
    for i in range(t): 
        print((c*i).rjust(t-1)+c+(c*i).ljust(t-1))

def pillar():
    for i in range(t+1): 
        print((c*t).center(t*2) + (c*t).center(t*6))
    
def belt():
    for i in range((t+1)//2):
        print((c*t*5).center(t*6))

def bottomcone():
    for i in range(t):
        print(((c*(t-i-1)).rjust(t)+c+(c*(t-i-1)).ljust(t)).rjust(t*6))

topcone()
pillar()
belt()
pillar()
bottomcone()

