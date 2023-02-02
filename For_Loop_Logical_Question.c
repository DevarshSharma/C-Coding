#include <stdio.h>
#include <string.h>
int main()
{
    int a=2,b=6,c,i;
    c=(a+b)-3;
    printf("%d\n",c);
    for(i=0;i<=c-1;i++)
    {
        a=a-i;
        c=c+a;
        printf("%d\t%d\t%d\n",i,a,c);
    }
    
        
    return 0;
}
