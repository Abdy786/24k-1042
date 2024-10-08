#include <stdio.h>

int main() {
    char c;
    int x;

    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Enter encryption key: ");
    scanf("%d", &x);

    printf("Encrypted: %c\n", c ^ x);
    printf("Decrypted: %c\n", (c ^ x) ^ x);

    return 0;
}