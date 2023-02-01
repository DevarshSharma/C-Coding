//Call by value

#include <stdio.h>
void swap (int x, int y);
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("Before swap x=%d and y=%d",x,y);
    swap(x,y);
    printf("After inside function swap x=%d and y=%d",x,y);//actual argument
    
    return 0;
}

void swap (int x, int y) //Multiple return statement is not allowed, therefore we used void
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After outside function swap x=%d and y=%d\n",x,y);//formed argument
}
