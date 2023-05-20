from collections import Counter

numShoes = int(input())
shoeSizes = list(map(int, input().split()))
numCustom = int(input())

earned = 0
sizesCount = Counter(shoeSizes)

for i in range(numCustom):
    
    size, pay = map(int,input().split())

    if size in sizesCount:
        x = sizesCount.get(size)
        if x != 0:
            earned += pay
            x -= 1
            sizesCount[size] = x

print(earned)


