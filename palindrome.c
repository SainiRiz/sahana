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
    if (c==a)
        printf("a palindrome");
    else
        printf("not a palindrome");
     return 0;
}
