/*
1. Sequential
2. Selection- if, elseif, else, nested if, switch                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
3. Looping- for, while, do-while
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    if (n>0)
    printf("You entered a positive number %d", n);
    else if (n<0)
    printf("You entered a negative number %d:", n);
    else 
    printf("Your number is zero");

    return 0;
}
