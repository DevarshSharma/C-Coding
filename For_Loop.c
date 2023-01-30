//We use for loop to delay time if we terminate the loop without body
#include <stdio.h>
int main()
{
    //Sum of n natural numbers using for loop
    int n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) //For time efficiency we will not use i=0
        sum+=i;
    printf("%d", sum);

    //Factorial of n numbers using for loop
    int n;
    long int fac=1;
    printf("Enter a number");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) //For time efficiency we will not use i=0
        fac*=i;
    printf("%ld", fac);
    
    return 0;
}
