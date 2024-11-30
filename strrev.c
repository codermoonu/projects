#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    strrev(str);
    
    printf("Reversed string: %s", str);
    
    return 0;
}
