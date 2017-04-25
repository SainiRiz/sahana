#include<stdio.h>
int main()
{
    int i;
    int a,b;
    int power=1;
    scanf("%d\n%d",&a,&b);
    
   for(i=0;i<b;i++)
   {
       power=power*a;
   
   }
    printf("%d",power);
    return 0;
}
