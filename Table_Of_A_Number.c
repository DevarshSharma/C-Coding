#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++)
        {
            a=n*i;
            printf("%d x %d = %d\n",n,i,a);
        }
    return 0;
}
