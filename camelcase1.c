#include<stdio.h>
#include<conio.h>
void main()
{
char str[200];
int i,j;
clrscr();
gets(str);
for(i=0;i<str[i]!='\0';i++)
{
if(str[0]>='a'&&str[0]<='z')
{
str[0]=str[0]-32;
}
}
for(j=1;j<i;j++)
{
if(str[j]==' ')
{
if(str[j+1]>='a'&&str[j+1]<='z')
{
str[j+1]=str[j+1]-32;
}
}
}
