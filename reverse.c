#include <stdio.h>
int main()
{
    int n,a=0,b,c;
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        b= n%10;
        a=a*10+b;
        n=n/10;
    }
    printf("%d",a);
    return 0;
}
