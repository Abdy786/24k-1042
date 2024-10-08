#include<stdio.h>

int main(){

     float salary,tax_rate, timeP_inMonths, tax, salaryAfter_tax;
    
    printf("please inter your salary");
    scanf("%f",&salary);

    printf("please inter tax rate");
    scanf("%f", &tax_rate);

    printf("please inter time period in months");
    scanf("%f", &timeP_inMonths);

    tax= salary * tax_rate * timeP_inMonths /100;
    salaryAfter_tax= timeP_inMonths*salary - tax;

    printf("your tax is %f \n",tax);
    printf("your salary after tax is %f \n",salaryAfter_tax);
    
       return 0;
}