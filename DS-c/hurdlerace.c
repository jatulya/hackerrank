#include <stdio.h>
#include <string.h>

int textarea(int a[], char str[])
{
    int len, i, max=0, pos=0;
    len = strlen(str);
    int ascii[len];
    
    for (i=0;i<len;i++)
    {
        ascii[i] = str[i]; //converting the character to ascii code
        ascii[i] -= 97; //reducing it by 'a' to get the pos in height array
        
        //finding the character with maximum height in the given string
        if (max<a[ascii[i]])
            max = a[ascii[i]];
    }
    
    return (len*max);   
}

int main()
{
    int i, a[26];
    char word[10];
    for (i=0;i<26;i++)
        scanf("%d",&a[i]);
    scanf("%s",word);
    printf("%d", textarea(a, word));
    return 0;
}