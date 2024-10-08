#include<stdio.h>
int main(){
   int num1,num2;
   char op;
   
   printf("please inter num1, num2, and operator");
   scanf("%d%d %c", &num1, &num2, &op);
   
   switch (op)
   {
    case '+': printf("your ans is %d\n",num1+num2);
    break;
    case '-': printf("your ans is %dn",num1-num2);
    break;
    case '*': printf("your ans is %d\n",num1/num2);
    break;
    case '/': printf("your ans is %d\n",num1/num2);
    break;
    default : printf("please enter valid character");
}
   return 0;
}