#include <stdio.h>

int countingvalley (int n, char path[])
{
    int i, valleycount = 0, level=0;

    for (i=0; i<n; i++)
    {
        //printf("%d", i);
        if (path[i] == 'D')
        {
            level = level -1;
            if (level == -1) valleycount++;
            //printf("D: %d\n", level);
        }
        else if (path[i] == 'U')
        {
            level = level +1;
            //printf("U: %d\n", level);
        }
        
    }

    return valleycount;
}

int main()
{
    int n,i;
    //printf("Number: ");
    scanf("%d", &n);
    char updown[20];
    //printf("Path:\n");
    for(i=0; i<n; i++) scanf("%c",&updown[i]);
    updown[n] = '\0';
    printf("%d", countingvalley(n,updown));
    return 0;
}