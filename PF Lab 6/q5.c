#include <stdio.h>

int main() {
    int num, terms, i;

    printf("Enter the starting point: ");
    scanf("%d", &num);
    
    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    for (i = 1; i <= terms; i++) {
        printf("%d, ", num);
        

        if (i == 1) {
            num /= 2;   
        } else if (i == 2) {
            num /= 3;   
        } else if (i == 3) {
            num /= 4; 
        } else if (i == 4) {
            num /= 5;
        } else if (i == 5) {
            num /= 6;
        } else if (i == 6) {
            num /= 7;
        } else if (i == 7) {
            num /= 13;
        } else {
            num = 0;    
        }
    }

    return 0;
}
