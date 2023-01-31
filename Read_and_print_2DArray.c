#include <stdio.h>
int main()
{
    int i,j,r,c,a[10][10];
    printf("Enter the order of the matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of array: ");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
    } 
    printf("Elements of the array are\n");
    for (i=0;i<r;i++)
    {   
        for (j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}