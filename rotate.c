#include <stdio.h>
  int main() {
        int i, j, n, tmp,k, a[100];
        scanf("%d", &n);
        for (i = 0; i < n; i++)
                scanf("%d", &a[i]);
        scanf("%d", &k);
        for (i = 0; i <k; i++)
        {
                tmp = a[0];
                for (j = 1; j <= n - 1; j++) {
                        a[j - 1] = a[j];
                }
                a[n - 1] = tmp;
        }
        for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
        }
        return 0;
  }
