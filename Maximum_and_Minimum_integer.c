#include <stdio.h>
int main()
{
    int a[10], i,n,max,min;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the elements of the array");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Maximum element is %d\n Minimum element is %d\n", max, min);
    return 0;
}