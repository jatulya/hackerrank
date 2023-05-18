//anna paid . they shared n-1 items but anna didnt eat 1 item
// check if brian's calc for anna's bill is correct. if it isnt, the display the amount brian has to pay

#include <stdio.h>

void bonAppetit(int n, int a[], int k, int b){

    int pay = 0;
    for (int i=0; i<n; i++)
        if(i!=k)   pay+=a[i];    
    pay/=2;

    if(pay==b)
        printf("Bon Appetit");
    else
        printf("%d", b - pay); 
  
}

int main(){

    int bill[10], k, amount,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d", &bill[i]);
    scanf("%d",&k);
    scanf("%d",&amount);
    bonAppetit(n,bill,k,amount);
    return 0;
}