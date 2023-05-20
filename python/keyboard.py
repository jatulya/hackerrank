#to find the most expensive keyboard-drive pair set

def getMoneySpent(board, drive, bud):

    exp = -1
    for i in board:
        for j in drive:
            if ((i+j))<=bud:
                exp = max(exp, (i+j))
    
    return exp

b = int(input("Enter the budget: "))
kb = int(input("Enter the number of keyboards: "))
d = int(input("Enter the number of drives: "))
print("Enter the rate of keyboards:", end=" ")
keyboard = list(map(int, input().rstrip().split()))
print("Enter the rate of drives:", end=" ")
drives = list(map(int, input().rstrip().split()))
val = getMoneySpent(keyboard,drives, b)
print("Maximum amount:", end=" ")
print(val)



