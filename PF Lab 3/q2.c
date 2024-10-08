#include<stdio.h>

int main(){

        int a = 25 ;
    int b = 30;
    int new_b ;


    printf("a is %d \n",a);
    printf("b is %d \n",b);

    new_b=b;
    b=a;
    a=new_b;

    printf("a is %d \n",a);
    printf("b is %d \n",b);
    
       return 0;
}