#include<stdio.h>
#include<stdlib.h>
#include "funcs.h"
void display_a (void)
{
	printf("|------------------------------|\n");
	printf("|	   (: WELCOME :)       |\n");
	printf("|     '''' HANGRY VENDS ''''   |\n");
	printf("|------------------------------|\n");
	printf("\n");

}
void menu(void)
{
	printf("<<  PRESS-1   PRODUCT INFORMATION >>\n");
	printf("<<  PRESS-2   	 CHECK CART	  >>\n");
	printf("<<  press-3     SELECT PRODUCT    >>\n");
	printf("<<  PRESS-8      <<BACK>>	  >>\n");
	printf("<<  PRESS-9      <<EXIT>>	  >>\n");
	printf("\n");
}
void display_b()
{	printf("<<  AVAILABLE OPTIONS     >>\n");
        printf("<<  PRESS-1  snacks       >>\n");
        printf("<<  PRESS-2  beverages    >>\n");
        printf("<<  PRESS-3  chocolates   >>\n");
        printf("<<  PRESS-4  biscuits     >>\n");
        printf("<<  PRESS-5  cakes        >>\n");
        printf("<<  PRESS-8  <<BACK>>     >>\n");
	printf("<<  PRESS-9  <<EXIT>>     >>\n");
	printf("\n");
}
/*
void display_c()
{
	printf("YOUR CART IS EMPTY\n");
	printf("PLEASE SELECT YOUR FAVORITE ITEMS\n");
	printf("\n");
}
*/
/*void display_d(S * head){
	printf("%-10s %-20s %-10s %-10s %-10s\n"," ","ITEM","WEIGHT","PRICE","QUANTITY");
	for (int i=1; head!= NULL;head=head->next)
	{
		printf("PRESS %d    %-20s %-10d %-10d %-10d\n",i,head->name,head->weight,head->price,head->quantity);
		i++;
	}
	printf("\n");
}
void display_e(S * head)
{
	printf("%-10s %-20s %-10s %-10s %-10s\n"," ","ITEM","WEIGHT","PRICE","QUANTITY");
	for (int i=1; head!= NULL;head=head->next)
	{
		printf("PRESS %d    %-20s %-10d %-10d %-10d\n",i,head->name,head->weight,head->price,head->quantity);
		i++;
	}
	printf("PRESS-10 <<BACK>>\n");
	printf("PRESS-9 <<EXIT>>\n");
	printf("\n");
}*/
void display_f()
{
	printf("PRESS-1 FOR CUSTOMER SERVICE\n");
	printf("PRESS-2 FOR OWNER SERVICE\n");
	printf("PRESS-8 <<BACK>>\n");
	printf("PRESS-9 <<EXIT>>\n");
	printf("\n");
}
