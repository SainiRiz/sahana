#include <stdio.h>
#include <string.h>
int main()
{
     char s[20],tmp;
     int i,j;
     scanf("%s",s);
     for(i=0;i<strlen(s);i=i+2)
     {
     tmp = s[i];
     s[i] = s[i+1];
     s[i+1] = tmp;
     }
     printf("\n%s",s);
    return 0;
}
