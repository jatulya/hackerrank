#include<stdio.h>
void main ()
{
    int units;
    float net_amo;
    scanf("%d",&units);    
       if (units<=50)
          net_amo=units*0.5;
        else if (units<=150)
          net_amo=25+((units-50)*0.75);
        else if (units<=250)
          net_amo=100+((units-150)*1.2);
        else 
          net_amo=220+((units-250)*1.5);
    net_amo+=net_amo*0.2;
    printf("%.2f",net_amo);
}