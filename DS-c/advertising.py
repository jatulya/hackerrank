
def viralAdverstising(n):
    
    recepients = 5
    netLiked = 0
    
    for i in range(n):
        
        liked = recepients//2
        recepients = liked*3
        netLiked += liked
    
    return netLiked
    
n = int(input().strip())
print(viralAdverstising(n))