#include <stdio.h>

int main()
{
    int n, i, j, mul, dig, carry =0, len = 1;
    int a[1000] = {0};
    
    scanf("%d", &n);
    
    a[0] = 1;
    
    for (i=2; i<=n; i++)
    {
        for (j=0; j<len; j++)
        {
            mul = (i*a[j]) + carry;
            dig = mul%10;
            a[j] = dig;
            carry = mul/10;          
        }
        while(carry)
        {
            dig = carry%10;
            a[len] = dig;
            len++;
            carry /= 10;
        }
    }
    
    for(i=len-1; i>=0; i--)
        printf("%d",a[i]);
        
    return 0;
}