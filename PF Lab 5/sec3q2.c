#include<stdio.h>
int main(){
    int num;
    printf("enter the number to check if its negetive, positive or zero \n");
    scanf("%d",&num);

    num>0? printf("number is positive \n"):(num<0? printf("number is negtive \n"):printf("number is 0 \n"));

    return 0;
}