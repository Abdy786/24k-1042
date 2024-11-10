#include <stdio.h>

void checkEvenOdd(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
}

void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is an even number\n", n);
    } else {
        printf("%d is an odd number\n", n);
    }
}
