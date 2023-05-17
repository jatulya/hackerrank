/*#include<stdio.h>

void climbingleaderboard(int n, int r[], int m, int p[])
{
    int r1[10], p1[10], i, j;   
    r1[0] = 1;
    
    for(i=1;i<n;i++)  //assigning ranks in the original leaderboard
    {
        if (r[i]<r[i-1])
            r1[i] = r1[i-1]+1;
        else
            r1[i] = r1[i-1];
        printf("%d\t", r1[i]);
    }
    printf("\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if (r[j]<p[i])
            {
                if (j==0)
                    p1[i]=1;
                else 
                    p1[i]=r1[j];  
                break;
            }
            else if (r[j]==p[i])
            {
                p1[i] = r1[j];
                break;
            }
            else continue;
        }
        
        if (j==n)
        {
            p1[i]=r1[j-1]+1;  
            n = n+1;
            r1[j] = p1[i];
            r[j] = p[i];
        }
        else
        {
            while(j<n)
            {
                r1[j]++;
                j++;
            }
        }
    }

    for (i=0;i<m;i++)
        printf("%d\n", p1[i]);
}

int main()
{
    int n, ranked[10], m, players[10], i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&ranked[i]);
    scanf("%d",&m);
    for (i=0;i<m;i++)
        scanf("%d",&players[i]);
    climbingleaderboard(n, ranked, m, players);    
}*/
#include<stdio.h>

int main()
{
    int n, m, i, net=-1, player, ranked[10], playerrank[10];
    
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ranked[net+1]);
        if (ranked[net] != ranked[net+1])
            net++;  //duplicate elements wont be added;
    }
    scanf("%d",&m);
    
    for(i=0;i<m;i++)
    {
        scanf("%d",&player);
        while(net!=0 && player>=ranked[net])
            net--;
        if (player == ranked[net])
            playerrank[i]=net;
        else playerrank[i]=net+1;
    }

    for(i=0;i<m;i++)
        printf("%d\n",&playerrank[i]);

    return 0;
}
