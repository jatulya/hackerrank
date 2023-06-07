#include<stdio.h>

int libraryfine(int d1[], int d2[])
{
    int fine;
    
    if (d1[2]>d2[2] )
        fine = 10000;
    else if (d1[2]<d2[2])
        fine = 0;
    else if (d1[1]>d2[1])
        fine = 500*(d1[1]-d2[1]);
    else if (d1[1]<d2[1])
        fine = 0;
    else if (d1[0]>d2[0])
        fine = 15*(d1[0]-d2[0]);
    else
        fine = 0;
        
    return fine;
}

int main()
{
    int returned[3], due[3];
    
    scanf("%d%d%d", &returned[0], &returned[1], &returned[2]);
    scanf("%d%d%d", &due[0], &due[1], &due[2]);

    printf("%d", libraryfine(returned, due));
}