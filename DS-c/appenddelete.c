#include <stdio.h>
#include <string.h>

char* function(char a[], char b[], int k)
{
    int n1, n2, s=0, i=0, todelete, toappend, net;
    
    n1 = strlen(a);
    n2 = strlen(b);
    
    while(i<n1 && i<n2)
    {
        if (a[i]==b[i])
        {
            s++;
            i++;
        }
        else break;        
    }
    
    todelete = n1 - s;
    toappend = n2 - s;
    net = toappend + todelete;
    
    if (net<k)
    {
        if ((k-net)%2==0 || (n1+n2)<=k)
            return "Yes";
        else 
            return "No";
    }
    else if (net==k)
        return "Yes";
    else
     return "No";
}

int main()
{
    char s[100], t[100];
    char* res;
    int k;
    scanf("%s%s%d",s,t,&k);
    res = function(s, t, k);
    printf("%s",res);
    return 0;
  
}

/*
    net -> moves to be made by deleting existing elements 
        and adding elements
    k-net -> moves left 
    here, if there are even number of moves left, then we can
     delete and add the same elements to exactly fill the moves
    in case it's odd, then 
     || (n1+n2)<=k -> if those odd moves are working on empty set
    otherwise, it's a no
*/