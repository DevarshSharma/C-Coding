#include <stdio.h>
int main()
{
    int n,t1=0, t2=1,t3;
    scanf("%d", &n);
    printf("%d\n%d\n",t1,t2);
    for (int i=3;i<=n;i++)
    {
        t3=t1+t2;
        printf("%d\n", t3);
        t1=t2;
        t2=t3;   
    }
    return 0;
}
