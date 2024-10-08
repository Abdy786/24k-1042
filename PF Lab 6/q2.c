#include <stdio.h>

int main() {
    int num, digits = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        digits++;
    }

    if (digits == 1) {
        printf("The number is a single digit.\n");
    } else if (digits > 1) {
        printf("The number has multiple digits.\n");
    } else {
        printf("Error in input.\n");
    }

    return 0;
}
