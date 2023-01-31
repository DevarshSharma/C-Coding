#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],i,n,key,loc=-1;
    printf("How many elements?\n");
    scanf("%d",&n);
    printf("Enter %d elements\n", n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            loc=i;
            break;
        }
    }
    if(loc==-1)
        printf("%d is not found", key);
    else
        printf("%d is found at location %d", key, loc+1);

    return 0;
}