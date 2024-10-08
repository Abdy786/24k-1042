#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the two number to check the maximum of them \n");
    scanf("%d%d",&a,&b);
    a>b? printf("maximum %d \n",a) : printf("maximum is %d \n",b);
    
    return 0;
}