#include <stdio.h>

void reverse(char str[], char reverse[]);

int main(){
    char str1[50], str2[50];
    printf("Enter string: ");
    fgets(str1, sizeof(str1), stdin);
    reverse(str1, str2);
    printf("Reversed string is: ");
    puts(str2);
}

void reverse(char str[], char reverse[]){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len - 1; i++) {
        reverse[i] = str[len - i - 2];
    }
    reverse[len - 1] = '\0';
}
