/*
1. while (knowns how many number of times the loop should work)
2. do-while (first irrespective of condition the body will executed then the condition will get checked)
3. for (knowns how many number of times the loop should work)
*/

#include <stdio.h>
int main()
{
    int a,n;
    int i=0;
    printf("Enter a Number");
    scanf("%d",&a);
    n=a;
    while (a!=0)
        {
            a=a/10;
            i++;
        }
    printf("%d",i);
    
    return 0;
}
