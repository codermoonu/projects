#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], str2[20];
    printf("Enter the string :");
    scanf("%s", str);
    puts(str);
    strcpy(str2, str);
    puts(str2);
    strrev(str);
    if(strcmp(str,str2)==0)
    {
        printf("the string is palindrome: ");
    }
    else{
        printf("the number is not palindrome:");

    }
    
}