#include <stdio.h>
int main()
{
    int num,i,fact,r,sum=0,temp;
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        fact=1;
        r=num%10;
        for(i=1;i<=r;i++)
            fact*=i;
        sum+=fact;
        num/=10;
    }
    if (sum==temp)
        printf("Strong number");
    else
        printf("Not a Strong Number");
    return 0;
}
