//Recursive Function

// Code 1: Factorial
#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    
    return 0;
}
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

// Code 2: Sum of 'n' natural numbers
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of %d is %d",n,sum(n));
    
    return 0;
}
int sum(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n+sum(n-1);
}

// Code 3: Power of a number
#include <stdio.h>
int power(int x, int y);
int main()
{
    int x, y;
    printf("Enter base and exponent: ");
    scanf("%d%d",&x,&y);
    printf("%d to the power of %d is %d",x,y,power(x,y));
    
    return 0;
}
int power(int x, int y)
{
    if (y==0)
        return 1;
    else
        return (x*power(x,y-1));
}
