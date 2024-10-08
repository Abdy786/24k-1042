#include <stdio.h>

int main() {
    int num, digits = 0, i, is_prime = 1;

    printf("Please enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    if (digits == 1) {
        printf("The number is a single digit.\n");
    } else if (digits > 1) {
        printf("The number has multiple digits.\n");
    } else {
        printf("Error in input.\n");
    }

    if (num <= 1) {
        printf("The number is neither prime nor composite.\n");
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("The number is prime.\n");
        } else {
            printf("The number is composite.\n");
        }
    }

    return 0;
}
