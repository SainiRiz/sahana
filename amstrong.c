#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c=0,d,e=0 ;
    scanf("%d",&a);
    e=a;
    while (e!=0)
    {
        b=e%10;
        c=c+b*b*b;
        e=e/10;
    }

    if(a==c)
        printf("Armstrong number");
    else
        printf("not an Armstrong number");

    return 0;
}


