#include <stdio.h>
  int main()
  {
      int i,n,j,a[100],count=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
          scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
          count=0;
          for(j=0;j<n;j++)
      {
          if((a[i]==a[j])&&(i!=j))
          {  count=1;
              break;
          }
      }
        if(count==0)
            printf("%d",a[i]);
          
      }
      return 0;
  }
