#include <stdio.h>
  int main()
  {
      int i,n,a[100];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      { 
          scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
          if(a[i]==i)
           printf("%d",i);
        
      }
        return 0;
  }
