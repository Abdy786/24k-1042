#include <stdio.h>

//Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult,and Senior, using nested if-else statements.
int main() {
int age;
printf("enter your age \n");
scanf("%d",&age);
if(age>=1){
if(age>=13 && age<=19){
printf("teenager \n");
}
else if(age>=20 && age<=40){
printf("adult \n");
}
else if(age>40){
printf("senior \n");
}
else{
printf("child \n");
}
}

return 0;
}