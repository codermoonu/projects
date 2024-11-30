#include <stdio.h>
#include <string.h>

int Palindrome(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    
    if (str[strlen(str) - 1] == '\n')
     {
        str[strlen(str) - 1] = '\0';
    }
    
    if (Palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
