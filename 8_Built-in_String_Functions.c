/*
1. #include <string.h>
2. strcpy()
3. strrev()
4. strcat()
5. strcmp()
6. strupr()
7. strlwr()
8. strlen()
*/

// Code 1: To find length of the string
#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char str1[20];
    printf("Enter a string: ");
    gets(str1);
    len=strlen(str1);
    printf("Length of the string is %d", len);
    
    return 0;
}

// Code 2: To copy the string
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20],str2[20];
    printf("Enter a string: ");
    gets(str1);
    strcpy(str2,str1);
    printf("Copied string is %s", str2);
    
    return 0;
}

// Code 3: To combine/concatenate two strings
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20],str2[20];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter a string: ");
    gets(str2);
    strcat(str1,str2);
    printf("Concatenated string is %s", str1);
    
    return 0;
}

// Code 4: Comparison of two strings
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20],str2[20];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter a string: ");
    gets(str2);
    int a=strcmp(str1,str2);
    if (a==0)
        printf("Strings are same");
    else
        printf("Strings are different");
    return 0;
}
