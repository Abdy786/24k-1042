#include <stdio.h>

int main() {
    char dest[100], source[20];
    int n, len = 0;
    
    printf("Enter destination string: ");
    scanf("%s", dest);
    
    printf("Enter source string: ");
    scanf("%s", source);
    
    printf("Enter number of characters you want to append: ");
    scanf("%d", &n);
    
    // Find the length of the destination string
    while (dest[len] != '\0') {
        len++;
    }
    
    // Append characters from source to dest
    for (int i = 0; i < n; i++) {
        dest[len + i] = source[i];
    }
    
    // Add null character to terminate the string
    dest[len + n] = '\0';
    
    // Print the concatenated string
    printf("The concatenated string is: %s\n", dest);
    
    return 0;
}
