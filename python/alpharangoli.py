alpha = list(map(chr, range(97,123)))

def upperhalf(n, s):

    for i in range(1,n):
        x = alpha[n-1:n-i:-1 ] + alpha[n-i:n]
        x = "-".join(x).center(s,'-')
        print(x)

def lowerhalf(n,s):

    i = n -1
    while(i>0):
        x = alpha[n-1:n-i:-1] + alpha[n-i:n]
        x = "-".join(x).center(s,'-')
        print(x)
        i -= 1

def printrangoli(n):

    mid = "-".join(alpha[n-1::-1] + alpha[1:n])
    s = len(mid)
    upperhalf(n, s) 
    print(mid) 
    lowerhalf(n,s)

if __name__ == '__main__':
    val = int(input("Enter the number: "))
    printrangoli(val)