#include <stdio.h>

int product(int, int);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Product of %d and %d: %d\n", num1, num2, product(num1, num2));
}

int product(int a, int b) {
    return a * b;
}
