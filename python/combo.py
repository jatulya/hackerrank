from itertools import combinations

word, n = input().split()
n = int(n)

for i in range (1,n+1):

    l = list(combinations(word,i))
    wordList = []   
    for comb in l:
        comb = sorted(comb)
        comb = ''.join(comb)
        wordList.append(comb)
    l= sorted(wordList)
    for comb in l:
        print(comb)