#include<stdio.h>

int apple[100000], orange[100000];
int house[2],tree[2], fruit[2];

void readar(int ar[], int p)
{
    int i;
    for(i=0;i<p;i++)
      scanf("%d",&ar[i]);
}

int count(int t, int nofru, int arr[])
{
    int i,res=0;
    for (i=0; i<nofru; i++) 
    {
        arr[i]+=t;
        if(arr[i]>=house[0]&&arr[i]<=house[1])
          res++;
    }
    return res;
}

void fnctn()
{
    int app, ora;
    app=count(tree[0],fruit[0],apple);
    ora=count(tree[1],fruit[1],orange);
    printf("%d\n%d",app,ora);
}

int main()
{
    readar(house, 2);
    readar(tree, 2);
    readar(fruit,2);
    readar(apple,fruit[0]);
    readar(orange,fruit[1]);
    fnctn();
    return 0;
}
