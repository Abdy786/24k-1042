#include <stdio.h>
int main() {
int num1,num2 ;
printf("Enter num1: \n");
scanf("%d", &num1);
printf("enter num2: \n");
scanf("%d", &num2);

num1 >= num2 ? printf("number 1 is  greatest\n") : printf("number 2 is  greatest\n");
return 0;
}