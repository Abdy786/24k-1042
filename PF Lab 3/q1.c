#include<stdio.h>

int main(){

        int number1 =3000000000;
    printf("number is %d \n",number1);
// wrong because (%d) takes -32,768 to 32,767
// in order to print 300000000000000 we have to use (%ld)
// it goes like
    printf("number is %ld \n",number1);
    
       return 0;
}