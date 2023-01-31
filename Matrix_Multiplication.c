#include<stdio.h>
#include <stdlib.h>
int main () 
{
    int r1,c1,r2,c2,i,j,k,a[10][10],b[10][10],res[10][10];
    printf("Enter the order of the first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the order of the second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
        printf("Matrix multiplication is possible\n");
    else
    {
        printf("matrix multiplication not possible\n");
            exit(0);
    }
    printf("Enter the elements of the first matrix: ");
    for(i=0;i<r1;i++);
        for(j=0;j<c1;j++);
            scanf("%d",&a[i][j]);
    printf("Enter the elements of the second elements: ");
    for(i=0;i<r2;i++)
        for (j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    
    printf("Product matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            res[i][j]=0;
            for (k=0;k<c1;k++)
                res[i][j]=res[i][j]+a[i][k]*b[k][j];
        printf("%d\t",res[i][j]);
        }
    printf("\n");
    
    }





    return 0;
}