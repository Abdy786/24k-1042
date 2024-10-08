#include<stdio.h>

int main(){
    int num,sum=0;
    printf("enter the number to find the number \n");
    scanf("%d",&num);
    while (num>=10)
    {
        sum=sum+num%10;
        num=num/10;
    }
    sum=sum+num;
    printf("sum is :%d\n",sum);

return 0;
}