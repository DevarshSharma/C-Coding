#include <stdio.h>
int main()
{
    int a,n,i;
    i=0;
    printf("Enter a digit");
    scanf("%d",&a);
    while (n!=0)
    {
        n=a%10;
        i=n+i;
        a/=10;
    }
    printf("%d",i);
    return 0;
}
