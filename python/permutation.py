from itertools import permutations

inputlist = list(input().split())
length = int(inputlist[1])
word = inputlist[0]

permuted = list(permutations(word,length))
permuted.sort()

for word in permuted:
    for i in word:
        print(i,end="")
    print()