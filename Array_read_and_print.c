//Internal pointer [name fo the array]
//External pointer [*p]

#include <stdio.h>
int main()
{
    int a[10], i, n;
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of array are: ");
    for(i=0;i<n;i++);
    {
        printf("%d\t",a[i]);
    }

    return 0;
}