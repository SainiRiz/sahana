#include <stdio.h>
  int main()
  {
      int i,m,j,a[100],flag=0;
      scanf("%d",&m);
      for(i=0;i<m;i++)
          scanf("%d",&a[i]);
      for(i=0;i<m;i++)
      {
          flag=0;
          for(j=0;j<m;j++)
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
