#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char str[n][100];
    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", str[i]);
    }

    char word[20];
    printf("Enter the word to search: ");
    scanf("%s", word);

    // Loop to search for the word in the array of strings
    for (int i = 0; i < n; i++) {
        if (strstr(str[i], word) != NULL) {
            printf("The word %s found in the row %d of given string.\n", word, i + 1);
            return 0;
        }
    }
    
    printf("Word %s not found in given string.\n", word);
    return 0;
}
