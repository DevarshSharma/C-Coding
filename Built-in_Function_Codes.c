// Code 1: To copy string (strcpy function code)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20],str2[20];
    int i=0;
    printf("Enter the string: ");
    gets(str1);
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    printf("Copied string is %s", str2);
    return 0;
}

// Code 2: To find length of the string (strlen function code)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    int i;
    printf("Enter the string: ");
    gets(str1);
    
    for(i=0;str1[i]!='\0';i++);
    printf("Length of string is %d",i);
    
    return 0;
}

// Code 3: To reverse the string (strrev function code)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], temp;
    int len,i;
    printf("Enter the string: ");
    gets(str1);
    
    for(len=0;str1[len]!='\0';len++);
    for(i=0;i<len/2;i++)
    {
        temp=str1[i];
        str1[i]=str1[len-1-i];
        str1[len-1-i]=temp;
    }
    printf("Reversed string: %s", str1);
    
    return 0;
}

// Code 4: To concatenated srting (strcat function code)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    int i,j;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++,i++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("Concatenated string is %s", str1);
    return 0;
}

// Code 5: To compare two strings (strcmp function code)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    int i,flag=1;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    while((str1[i]!='\0')||(str2[i]!='\0'))
    {
        if (str1[i]!=str2[i])
        {
            flag=0;
            break;
        }
        i++;
    }
    if (flag==1)
        printf("Both the strings are same");
    else
        printf("Both the strings are different");
    return 0;
}

//Code 6: To convert the characters of the string from uppercase to lowercase and vice-versa (strupr and strlwr function code)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    int i;
    printf("Enter the first string: ");
    gets(str1);
    for (i=0;str1[i]!='\0';i++)
    {
        if (str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
        else if ((str1[i]>='a' && str1[i]<='z'))
            str1[i]=str1[i]-32;
    }
    printf("Your altered string: %s",str1);
    return 0;
}
