#include <stdio.h>
int main()
{
    int big,a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    big=a>b?a:b;
    printf("big=%d",big);
    return 0;

}
