#include<stdio.h>
int main(){
    int year;
    printf("enter year");
    scanf("%d",&year);
    year%400==0? printf("leap year \n"):(year%100==0? printf("not a leao year \n"):(year%4==0? printf("leap year \n"):printf("not a leao year \n")));
}