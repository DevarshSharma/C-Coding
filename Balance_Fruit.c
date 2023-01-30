#include <stdio.h>
int main()
{
    int m,a,r;
    scanf("%d%d%d", &m, &a, &r);
    if (m>a)
        {
            int c=m-a;
            r=r+a;
            printf("%d",r);
        }
    else
        {
            int d=a-m;
            r=r-a;
            printf("%d",r);
        }
    return 0;
}
