/*
Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else. 
*/
#include <stdio.h>
int main(){
    char character;
    printf("enter character to check it is  small alphabet, capital alphabet, digit, or special character ");
    scanf("%c",&character);

    if(character>='0'&&character<='9'){
        printf("The character is digit %c \n",character);
    }
    else if(character>='A' && character<='Z'){
        printf("The character is capital alphabet %c \n",character);
    
    }
    else if(character>='a' && character<='z'){
        printf("The character is small alphabet %c \n",character);
    
    }
    else{
        printf("The character is special character %c \n",character);
    }
    
return 0;
}