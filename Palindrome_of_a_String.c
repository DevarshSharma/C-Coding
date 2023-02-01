#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i,len, flag=0;
    printf("Enter the string: ");
    gets(str);
    for (len=0;str[len]!='\0';len++);
    for (i=0;i<len/2;i++)
    {
        if (str[i]!=str[len-1-i])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%s is a palindrome",str);
    else
        printf("%s is not a palindrome",str);
        
    return 0;
}
