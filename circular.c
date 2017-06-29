#include<stdio.h> 
int main()
{ 
     int a[10][10],n;
     int m,i,j=0,k,q;
     scanf("%d",&n);
     for(int i=0; i<n; i++)
     {
          for(int j=0; j<n; j++)
          scanf("%d",&a[i][j]);
     }
     q = n;

     for(int i=q-1; i > 0; i--)
     {
          for(k=j;k< i; k++)
          printf("%d ", a[j][k]);
          for(k=j; k < i; k++)
          printf("%d ", a[k][i]); 
          for(k=i; k > j; k--)
          printf("%d ", a[i][k]);
          for(k=i; k > j; k--)
          printf("%d ", a[k][j]);
         j++;
     }

     m = (q-1)/2;
     if (q % 2 == 1) 
         printf("%d", a[m][m]);
     return 0;
}
