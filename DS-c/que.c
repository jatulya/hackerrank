#include<stdio.h>

int utopianTree(int n)
{
    int i, height=0;
    
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
            height++;
        else {
            height*=2;
        }
    }  
    return height;
}

int main()
{
    int t, i;
    scanf("%d",&t); 
    int test_case[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&test_case[i]);
        printf("%d\n", utopianTree(test_case[i]));
    }
    return 0;  
}
