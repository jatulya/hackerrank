// find and print the minimum number of pages that must be turned in order to arrive at page p

#include<stdio.h>

int pageCount(int n, int p){

    int front =0, back=0,i, count;

    for( i=1; (i/2 < p/2); i+=2)
        front++;

    for(i=n; (i/2>p/2); i-=2)
        back++;

    count = front < back ? front: back;

    return count;
}

void main(){

    int n, p;
    scanf("%d%d", &n,&p);
    printf("%d\n", pageCount(n,p));
    
}

