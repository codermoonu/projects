#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];
    
    printf("Enter the source string: ");
    scanf("%s",source);
    strcpy(destination, source);
    
    printf("Copied string: %s", destination);
    
    return 0;
}
