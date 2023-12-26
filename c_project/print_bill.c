#include<stdio.h>
#include "funcs.h"
/*
typedef struct structure S;
struct structure{
        char name[31];
        int weight;
        int price;
        int quantity;
        S * next;
};
*/
void print_bill(S * a[],S s,int *ptr)    //array of structures and size of struct
{
    int l = (sizeof(a))/(sizeof(s));
    printf("S.no    Name    Price   Quantity    Subtotal\n");
    for(int i =0;i<l;i++)
    {
        int k;
        k = (a[i]->quantity)*(a[i]->price);
        printf("%d  %s  %d  %d  %d\n",i+1,a[i]->name,a[i]->price,a[i]->quantity,k);


    }
    printf("--------------------------------------------------\n");
    printf("                                   Grandtotal = %d\n",*ptr);
    printf("******************  HAPPY SNACKING ********************\n");
    printf("___________THANK U ! VISIT AGAIN !___________");
    
}
