#include<stdio.h>
#include<math.h>

int perfectSquare(long long int n)
{
    int k;
    
    while(1)
    {
        k = sqrt(n);
        if (k == trunc(k))
            break;
        n--;
    }
    
    return k;
}

int range(long long int a, long long int b)
{
    int s1,s2;
    
    s1 = perfectSquare(a);
    s2 = perfectSquare(b);

    if (s1*s1 == a) 
    //if the given number is a perfect square, we need to include them too
        return (s2-s1+1);
    else return (s2-s1);    
}

int main()
{
    int q, i;
    long long int  a, b;
    scanf("%d",&q);
    for(i=0;i<q; i++)
    {
        scanf("%lld%lld",&a, &b);
        printf("%d\n", range(a, b));
    }
    return 0;
}