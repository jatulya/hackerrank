/*There will be two arrays of integers. Determine all integers that satisfy the following two conditions:
The elements of the first array are all factors of the integer being considered
The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. Determine how many such numbers exist.*/
#include<stdio.h>
int a[10],b[10];
int large=0;
void readar(int n, int list[])
{
    int i=0;
    for(i=0;i<n;i++)
      {
        scanf("%d",&list[i]);
        if(list[i]>large)
          large=list[i];
      }
}
int iffactor(int x, int y)
{
    if(x%y==0) return 1;
    else return 0;    
}
int check(int n, int m)
{
    int i, j, count=0;
    int yes;
    printf("Required elements: ");
    for(i=1;i<=large;i++)
    {
        yes=1;
        for (j=0;j<n;j++)
        {
            if(iffactor(i, a[j])!=1)
            {
                yes=0;break;
            }
        }
        if(yes==0)
          continue;
        for(j=0;j<m;j++)
        {
            if(iffactor(b[j],i)!=1)
            {
                yes=0;break;
            }
        }
        if(yes==1)
         {
             count++;
             printf("%d ",i);
         }
    }
    printf("\n");
    return count;
}
int main()
{
    int n, m;
    scanf("%d",&n);
    readar(n,a);
    scanf("%d",&m);
    readar(m,b);
    int ans =check(n,m);
    printf("%d",ans);
    return 0;
}
