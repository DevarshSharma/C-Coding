#include <stdio.h>
int main()
{
    int a[10],i,n,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for (i=0;i<n/2;i++)
        {
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
        }
    printf("Reversed array is\n");
    for (i=0;i<n;i++)
        printf("a[%d]=%d\t",i,a[i]);
    
    
    return 0;
}