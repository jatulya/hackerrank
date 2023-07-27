#include<stdio.h>

int a[10];

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n)
{
    int i, j, exc;
    for(i=0;i<n-1;i++)
    {
        exc = 0;
        for (j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
            {
               swap(&a[j],&a[j+1]);
               exc=1; 
            }
        if (exc==0)
          break;
    }
}

int pickingNumbers(int n)
{
    int i, temp[10], max=0, j,k, count;
    sort(n);

    for(i=0;i<n;i+=k)
    {
        count =0;
        for(j=i;j<n;j++)
        {
            if (a[j]-a[i]<=1)
            {
                count++;
                max = max>count ? max : count; 
                k = count;               
            }
            else break;
        }
    }
    return max;
}

int main()
{
    int i,n;
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d", pickingNumbers(n));
}

