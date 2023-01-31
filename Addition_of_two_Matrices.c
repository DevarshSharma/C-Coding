#include <stdio.h>
int main()
{
    int a[10][10],i,j,r,c,b[10][10],z[10][10];
    printf("Enter the order of first matrix: ");
    scanf("%d%d",&r,&c);
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        } 
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            z[i][j]=a[i][j]+b[i][j];
            printf("Addition of two matrices are:");
            printf("%d\t",z[i][j]);
        }
    }
    return 0;
}