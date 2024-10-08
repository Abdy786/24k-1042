#include<stdio.h>
#include<string.h>

int main()
{
    int id,unit,surcharges;
    float totalbill=0;
    char name[10];
    printf("Enter Your Name: ");
    scanf("%s",&name);
    printf("Enter Your ID: ");
    scanf("%d",&id);
    printf("Enter UNITS Comsumed: ");
    scanf("%d",&unit);

    printf("\nName:%s",name);
    printf("\nID:%d",id);
    if(unit>0 && unit<200)
    {
        totalbill=unit*16.20;
        printf("\nCustomer Bill:%.2f",totalbill);
    }
    else if(unit>200 && unit<300)
    {
        totalbill=unit*20.10;
        printf("\nCustomer Bill:%.2f",totalbill);
    }
    else if(unit>300 && unit<500)
    {
        totalbill=unit*27.10;
        printf("\nCustomer Bill:%.2f",totalbill);
    }
    else if(unit>500)
    {
        totalbill=unit*35.90;
        printf("\nCustomer Bill:%.2f",totalbill);
        if(totalbill>18000)
        {
            printf("\nAdditional Surcharges:%.2f",totalbill*0.15);
            totalbill=totalbill+totalbill*0.15;
        }
        else{
            printf("\nNO Surcharges");
        }
    }
    printf("\nNet Amount Paid by the Customer:%.2f",totalbill);



    return 0;
}
