    
n, k, q = map(int, input().split())
a = list(map(int, input().split()))

for i in range(q):
    
    que = int(input())
    i = (n - (k%n) + que)%n
    print(a[i])
    