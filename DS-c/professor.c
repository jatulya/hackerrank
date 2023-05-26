#include<stdio.h>

char* angryProfessor(int n, int k, int a[])
{
   int i, onTime=0;
   
   for (i=0;i<n;i++)
       if(a[i]<=0)
        onTime++;
   
   if(onTime<k)
    return "YES\n";
   else 
    return "NO\n";
    
}

int main()
{
    int test_cases,i,j,n, k, arrival_time[1000];
    scanf("%d",&test_cases);
    
    for(i=0;i<test_cases;i++)
    {
        scanf("%d%d",&n,&k);
        for(j=0;j<n;j++)
            scanf("%d",&arrival_time[j]);
        printf("%s\n",angryProfessor(n,k, arrival_time));
    }
    return 0;
}