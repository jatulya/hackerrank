from collections import defaultdict

a, b = map(int, input().split())

A = defaultdict(list)
for i in range(a):
    key = input()
    A[key].append(i+1)

for i in range(b):
    key = input()

    if key in A:
        print(' '.join(map(str,A[key])))
    else: 
        print(-1)




