#include <stdio.h>
int main()
{
    int m, i, sum = 0;
    scanf("%d",&m);
    for(i=1;i <= m;i++)
    {
        sum=sum+i;   
    }
    printf("%d",sum);
    return 0;
}
