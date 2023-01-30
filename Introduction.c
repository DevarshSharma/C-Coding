/*
1. Keywords, Character Set, Data types, Operaters, Identifiers, Control Statements, Arrays, Functions, Strings, Pointers, Structures and Unions
*/

#include <stdio.h>
int main()
{
    int a,b,c;
    a=10;
    b=a++; //value of 'a' is assigned to 'b' then 'a' becomes 11
    //a=11
    c=++a; //value of 'a' is increased by 1 then assigned to 'c' which is equal to 12
    printf("a=%d\n b=%d\n c=%d",a,b,c);
    return 0;
}
