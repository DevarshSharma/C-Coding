#include <stdio.h>
int main()
{
    int n;
    printf("Enter a digit");
    scanf("%d",&n);
    if (n%9==0)
        printf("%d is reduced to 9", n);
    else
        printf("%d is reduced to %d",n,n%9);

    return 0;
}
