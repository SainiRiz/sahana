#include <stdio.h>
 int main()
{
  int a;
  scanf("%d", &a);
  if ( a%400 == 0)
    printf("a leap year.\n");
  else if ( a%100 == 0)
    printf("not a leap year.\n");
  else if (a%4 == 0 )
    printf(" a leap year.\n");
  else
    printf("not a leap year\n");  
  return 0;
}
