#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int x, y,LCM;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("LCM of %d and %d is %d",x,y,(x*y/gcd(x,y)));
    
    return 0;
}
int gcd(int x, int y)
{
    if (y==0)
        return x;
    else
        return gcd(y,x%y);
}
