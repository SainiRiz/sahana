#include <stdio.h>
int main()
{
  int n1,n2,i,a,b,c;
  scanf("%d\n%d", &n1, &n2);
  for(i=n1+1; i<n2;i++)
  {
      a=i;
      b=0;
      while(a!=0)
      {
          c=a%10;
          b=b+c*c*c;
          a=a/10;
      }
      if(i==b)
      {
          printf("%d ",i);
      }
  }
return 0;
}
