#include <stdio.h>

int hurdleRace(int n, int k, int a[])
{
    int i, max=0;
    
    for (i=0;i<n;i++)
        if (max<a[i])
            max = a[i];
    
    if (max>k)
        return (max - k);
    else
        return 0;     
}

int main()
{
    int n, k;
    scanf("%d%d", &n,&k);
    int hurdles[n];
    for (int i=0;i<n;i++)
        scanf("%d",&hurdles[i]);
    printf("%d", hurdleRace(n, k, hurdles));
    return 0;
}
