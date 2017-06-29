#include <stdio.h>
  int main()
  {
      int i,n,j,a[100],flag=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
          scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
          flag=0;
          for(j=0;j<n;j++)
      {
          if((a[i]==a[j])&&(i!=j))
          {  flag=1;
              break;
          }
      }
        if(flag==0)
            printf("%d",a[i]);
          
      }
      return 0;
}
