#include<stdio.h>

int main(){
    int a=3,b=4;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a= %d",a);
    printf("b= %d",b);
}