#include <stdio.h>

int check (int w, int x, int y, int z)
{
    int a=w, b=y, val;
    
    if(w<y && x<z) 
      return 0;
    else if (w>y && x>z)
      return 0;
    else
    {
        val =0;
        for(int i=0;i<100000;i++)
        {
            a+=x;
            b+=z;
            if (a==b)
              {
                val=1;
                break;
              }
        }
        return val;
    }
}

int main()
{
    int x1,v1,x2,v2,ch;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    ch = check(x1,v1,x2,v2);
    if(ch==1)
      printf("YES");
    else 
      printf("NO");
    return 0;   
}
