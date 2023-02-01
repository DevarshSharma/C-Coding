#include <stdio.h>
long int fact(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fatorial of %d is %ld",n,fact(n));
    
    return 0;
}

long int fact(int n)//control transfer function
{
    int i;
    long int factorial=1;
    for (i=1;i<=n;i++)
        factorial=factorial*i;
    return factorial;
}
  
