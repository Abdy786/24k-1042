#include <stdio.h>

int main() {
    int num = 1, terms;
    
    printf("Enter the number of terms in the series:\n");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++) {
        printf("%d, ", num);
        
       
        if (i == 2) {
            num = num;  
        } else {
            num *= 2;   
        }
    }

    return 0;
}
