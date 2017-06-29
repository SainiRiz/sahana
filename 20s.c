#include <stdio.h>
 int main()
{
    int i,n=20,sum=0;
     for(i=0;i<n;i++)
     { 
    if(i%2==1)
        sum=sum+i;
     }
     printf("%d ",sum);
     return 0;
}
