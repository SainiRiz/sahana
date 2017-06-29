#include <stdio.h>
       int circle()
      {
      int r,area1;
      scanf("%d",&r);
      area1=3.14*r*r;
      return (area1);
      }
      int rect()
      {
    int l,b,h,area2;
    scanf("%d%d%d",&l,&b,&h);
      area2=l*b*h;
    return (area2);
      }
      int triang()
      {
      int b,h,area3;
      scanf("%d%d",&b,&h);
      area3=(b*h)/2;
      return (area3);
      }

      int main()
  {
      int n,area1,area2,area3;
      scanf("%d",&n);
      switch(n)
      {
      case 1:
          circle();
             printf("%d",area1);
          break;
      case 2:
          rect();
              printf("%d",area2);
          break;
      case 3:
           triang();
              printf("%d",area3);
          break;
      default:
          printf("Invalid input");
      }
     return 0;
}
