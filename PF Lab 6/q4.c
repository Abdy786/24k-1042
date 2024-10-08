#include <stdio.h>

int main() {
    int first = 1, second = 2, next = first + second;

    printf("%d, %d, ", first, second);

    while (next <= 13) {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}
