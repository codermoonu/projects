#include <stdio.h>
#include <ctype.h>
#include <string.h>
int StrongPassword(char password[]);
int main()
{
    char password[20];
    printf("Enter your Password. It should be atleast 8 Characters long : ");
    scanf("%s",password);
    
    if(strlen(password)<8)
    {
        printf("Password Is Too short. It must be atleast * characters.\n");
    }
    else 
    {
        int strength=StrongPassword(password);
        if(strength==1)
        {
            printf(" Password is weak. Please Try again!\n");
        }
        else if (strength==1)
        {
            printf("Your password is not strong enough. Please Try Again!\n");
        }
        else if (strength==1)
        {
            printf("Your Password is Strong. \n");
        }
        
    }
    return 0;
}
int StrongPassword(char password[])
{
    size_t length= strlen(password);
    int hasUpper=0, hasLower=0, hasDigit=0, hasSpecial=0;
    for(size_t i=0; i<length; i++)
    {
        if(isupper(password[i])) hasUpper=1;
        else if(islower(password[i])) hasLower=1;
        else if (isdigit(password[i])) hasDigit=1;
        else hasSpecial=1;
    }
if(hasUpper && hasLower && hasDigit && hasSpecial)
{
    return 3;
}
else if ((hasUpper || hasLower) && hasDigit)
{
    return 2;
}
else
{ return 1;
 }
}