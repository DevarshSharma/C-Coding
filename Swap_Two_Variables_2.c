//Call by reference

#include <stdio.h>
void swap (int *x, int *y);
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("Before swap x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("Outside function, after swap x=%d and y=%d\n",x,y);
    
    return 0;
}

void swap (int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("Inside function, after swap x=%d and y=%d\n",*x,*y);
}
