#include <stdio.h>
int main()
{
    int a, b=0, c=0;
    scanf("%d", &a);
    int z=a;
    while (a!=0)
    {
        b=a%10;
        c=(b*b*b) + c;
        a/=10;
    }
    if (z==c)
        printf("%d is an armstrong number", z);

    else
        printf("%d is not an armstrong number", z);
    
    return 0;
}
