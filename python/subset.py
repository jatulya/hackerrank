
t = int(input())

while(t):
    input()
    setA = set(map(int, input().split()))
    input()
    setB = set(map(int, input().split()))
    print(setA.issubset(setB))
    t -= 1