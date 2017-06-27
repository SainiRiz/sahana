#include <stdio.h>
int main()
{
    int a,b,i,count;
    scanf("%d %d",&a,&b);
    while (a<b)
    {
        count=0;

        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                count=1;
            }
        }

        if (count==0)
            printf("%d\t",a);
        a++;
    }
    return 0;
}
