#include<stdio.h>
#include "funcs.h"
void payment(S * a[],S s,int* ptr)
{
    float pay,wallet;
    int t = *ptr;
    printf("PROCEEDING FOR TRANSACTION\n");
    printf("ENTER THE AMOUNT :  ");
    scanf("%f",&pay);
    printf("\n");
    float short_amount;
    while(1)
    {
    if (pay< t)
    {
        short_amount = t - pay;
        printf("YOU ARE RS %f SHORT OF AMOUNT\n",short_amount);
        printf("PLEASE PROCEED TO PAY RS %f TO GET YOUR ITEMS\n",short_amount);
    }
    else if (pay > t)
    {
        float excess_amount;
        excess_amount = pay - t;
        printf(" RS %f HAS BEEN ADDED TO YOUR WALLET",excess_amount);
        wallet = wallet + excess_amount;
        print_bill(a,s,ptr); 
        break;
    }
    else{
        printf("PAYMENT SUCCESSFULL !\n");
        print_bill(a,s,ptr); 
        break;
    }
    t = short_amount;
    printf("ENTER THE AMOUNT: \n");
    scanf("%f",&pay);
        
    }
}
