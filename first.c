#include <stdio.h>
  int main()
  {
      int i,n,j,a[100],s[100];
      scanf("%d",&n);
      for(i=0;i<n;i++) 
          scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              s[0]=a[i];
              break;
          }

     }     
    }
            printf("%d\n",s[0]);
      return 0;
}
