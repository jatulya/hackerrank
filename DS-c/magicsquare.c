#include<stdio.h>
#include<math.h>
int b[8];

int ms(int a[3][3])
{
    int allms[8][3][3] = {{{8,3,4},{1,5,9},{6,7,2}}, {{8,1,6},{3,5,7},{4,9,2}},
                         {{6,1,8},{7,5,3},{2,9,4}}, {{6,7,2},{1,5,9},{8,3,4}},
                         {{2,7,6},{9,5,1},{4,3,8}}, {{2,9,4},{7,5,3},{6,1,8}},
                         {{4,9,2},{3,5,7},{8,1,6}}, {{4,3,8}, {9,5,1},{2,7,6}} };
    int i, j,k, cost, min;

    for(k=0;k<8;k++)
    {
        cost=0;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                cost += abs(a[i][j] - allms[k][i][j]);
        b[k] = cost;
    } 

    min = b[0];
    for (i=1;i<8;i++)
    {
        if (b[i]<min)
            min = b[i];
    }

    return min;
}

int main()
{
    int mat[3][3], output = 0, i, j;
    
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            {
                scanf("%d", &mat[i][j]);
            }

    output = ms(mat);
    printf("Cost = %d", output);
    return 0;
}