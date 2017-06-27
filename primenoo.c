#include <stdio.h>
int main()
{
    int num1,num2,i,count;
    scanf("%d %d",&num1,&num2);
    while (num1<num2)
    {
        count=0;

        for(i=2;i<=num1/2;i++)
        {
            if(num1%i==0)
            {
                count=1;
            }
        }

        if (count==0)
            printf("%d\t",num1);
        num1++;
    }
    return 0;
}
