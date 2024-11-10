#include <stdio.h>

int main(){
    int n;
    printf("Please enter the total number of words to check: ");
    scanf("%d", &n);

    char str[n][20];
    for(int i = 0; i < n; i++){
        printf("Enter word %d: ", i + 1);
        scanf("%s", str[i]);
    }

    for(int i = 0; i < n; i++){
        int len = 0, count = 0;

        for(int j = 0; str[i][j] != '\0'; j++){
            len++;
        }

        for(int j = 0; j < len / 2; j++){
            if(str[i][j] != str[i][len - j - 1]) break;
            else count++;
        }

        if(count == len / 2){
            printf("Word %d ('%s') is a Palindrome\n", i + 1, str[i]);
        }
        else{
            printf("Word %d ('%s') is Not a Palindrome\n", i + 1, str[i]);
        }
    }

    return 0;
}
