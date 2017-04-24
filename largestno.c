#include<stdio.h>
int main()
{
    int a,b,c;
   scanf("%d\n%d\n%d\n",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("%d",a);
    else if((b>a)&&(b>c))
        printf("%d",b);
    else if((c>a)&&(c>b))
        printf("%d",c);
    return 0;
}
