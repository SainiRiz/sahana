#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,res=0,i;
scanf("%d%d",&n1,&n2);
for(i=2;i<=n1&&i<=n2,i++)
{
if(n1%i==0&&n2%i==0)
res=i;
}
printf("The hcf is %d",res);
getch();
}

