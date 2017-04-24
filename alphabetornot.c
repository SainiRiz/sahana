#include<stdio.h>
int main()
{
char a;
scanf("%s",&a);
if((a>='a')&&(a<='z')||(a>='A')&&(a<='Z'))
printf("The number is an alphabet");
else
printf("The number is not an alphabet");
return 0;
}
