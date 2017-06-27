#include <stdio.h>
int main()
{
    int c,d,i,count;
    scanf("%d %d",&c,&d);
    while (c<d)
    {
        count=0;

        for(i=2;i<=a/2;i++)
        {
            if(c%i==0)
            {
                count=1;
            }
        }

        if (count==0)
            printf("%d\t",c);
        c++;
    }
    return 0;
}
