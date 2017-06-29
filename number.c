#include <stdio.h>
 
void printNumber(int n);
 
int main()
{
    int n;
    scanf("%d", &n);
     printNumber(n);
    return 0;
}
 
void printNumber(int n)
{
    if(n >= 1)
    {
        printNumber(n-1);
        printf("%d ", n);
    }
}
