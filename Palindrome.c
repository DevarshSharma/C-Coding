#include <stdio.h>
int main()
{
    int n,rem,rev=0,a;
    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    while (n!=0)
    {
            rem=n%10;
            rev=rev*10 + rem;
            n/=10;
    }
    if (rev=a)
        printf("%d is a palindrome", a);
    else
        printf("%d is not a palindrome", a);
    return 0;
}
