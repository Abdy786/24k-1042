/*
An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it&#39;s more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.
*/

#include<stdio.h>
int main(){
    float totalCost;
    printf("This is eid sell enter your total cost of shopping \n");
    printf("the value should be greater than or equals to 500 \n");

    scanf("%f",&totalCost);


    if (totalCost>=500 && totalCost<2000){
        printf("your total amount is %.2f \n",totalCost);
        printf("your bill after 5persent disscount %.2f \n",totalCost*95/100);
    
    }
    else if (totalCost>=2000 && totalCost<4000){
        printf("your total amount is %.2f \n",totalCost);
        printf("your bill after 5persent disscount %.2f \n",totalCost*90/100);
    
    }
    else if (totalCost>=4000 && totalCost<6000){
        printf("your total amount is %.2f \n",totalCost);
        printf("your bill after 5persent disscount %.2f \n",totalCost*80/100);
    
    }
    else if (totalCost>=6000){
        printf("your total amount is %.2f \n",totalCost);
        printf("your bill after 5persent disscount %.2f \n",totalCost*65/100);
    
    }
    else {
        printf("please enter the vaild number");
    }

    return 0;
}