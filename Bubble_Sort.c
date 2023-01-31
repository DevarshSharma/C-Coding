#include <stdio.h>
int main()
{
    int i,j,a[10],n,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)//number of pass
    {
        for(j=0;j<n-1-i;j++)//number of comparisons
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}