#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
void owner()
{
    S cart[50];
    S * snacks,beverages,chocolates,biscuits,cakes;
    printf("PLEASE SELECT AN OPTION\n");
    printf("PRESS 1 FOR INFORMATION ABOUT ITEMS\n");
    printf("PRESS 2 FOR ADDING NEW ITEM\n");
    printf("PRESS 3 FOR REMOVING AN ITEM\n");
    printf("PRESS E TO EXIT THE OWNER MODE ANYTIME\n");
    char c1;
    scanf("%c",&c1);
    while (c1!='E')
    {
        if (c1 =='1')
        {   
            S * snacks=NULL;
            snacks=read_file(snacks,"snacks.txt");
            display(snacks);


            S * beverages=NULL;
            beverages=read_file(beverages,"beverages.txt");
            display(beverages);



            S * chocolates=NULL;
            chocolates=read_file(chocolates,"chocolates.txt");
            display(chocolates);


            S * biscuits=NULL;
            biscuits=read_file(biscuits,"biscuits.txt");
            display(biscuits);


	    S * cakes=NULL;
            cakes=read_file(cakes,"cakes.txt");
            display(cakes);
        }
    


        if (c1 == '2')
        {
            
            int c2;
			int j =0;
            printf("PRESS 1 TO ADD ITEMS IN SNACKS\n");
            printf("PRESS 2 TO ADD ITEMS IN BEVERAGES\n");
            printf("PRESS 3 TO ADD ITEMS IN CHOCOLATES\n");
            printf("PRESS 4 TO ADD ITEMS IN BISCUITS\n");
			printf("PRESS 5 TO ADD ITEMS IN CAKES\n");
            printf("PRESS 0 TO EXIT THE ADD ITEMS MODE\n");
            scanf("%d",&c2);
            while(c2 != 0)
            {
                if (c2 == 1)
                {
                    S * snacks=NULL;
					snacks=read_file(snacks,"snacks.txt");
					display(snacks);
					int select_1,qty;
					printf("TYPE THE ITEM YOU WANT TO ADD WITH ITS QUANTITY\n");
					scanf("%d %d",&select_1,&qty);
					if(select_1>10 && select_1<1)
						{printf("INVALID CHOICE\n");}
					else
					{	
						S * copy;
						copy= copy_data(snacks,select_1,qty);
						strcpy(cart[j].name,copy->name);
						cart[j].price=copy->price;
						cart[j].quantity=copy->quantity;
						j++;
						printf("SUCCESSFULLY ADDED TO THE MACHINE\n");
						update_list_add(snacks,select_1,qty);
						update_file("snacks.txt",snacks);
					}
                }


                if (c2 == 2)
                {
                    S * beverages=NULL;
					beverages=read_file(beverages,"beverages.txt");
					display(beverages);
					int select_1,qty;
					printf("TYPE THE ITEM YOU WANT TO ADD WITH ITS QUANTITY\n");
					scanf("%d %d",&select_1,&qty);
					if(select_1>10 && select_1<1)
						{printf("INVALID CHOICE\n");}
					else
					{	
						S * copy;
						copy= copy_data(beverages,select_1,qty);
						strcpy(cart[j].name,copy->name);
						cart[j].price=copy->price;
						cart[j].quantity=copy->quantity;
						j++;
						printf("SUCCESSFULLY ADDED TO THE MACHINE\n");
						update_list_add(beverages,select_1,qty);
						update_file("beverages.txt",beverages);
					}
                }


                if (c2 == 3)
                {
                    S * chocolates=NULL;
					chocolates=read_file(chocolates,"chocolates.txt");
					display(chocolates);
					int select_1,qty;
					printf("TYPE THE ITEM YOU WANT TO ADD WITH ITS QUANTITY\n");
					scanf("%d %d",&select_1,&qty);
					if(select_1>10 && select_1<1)
						{printf("INVALID CHOICE\n");}
					else
					{	
						S * copy;
						copy= copy_data(chocolates,select_1,qty);
						strcpy(cart[j].name,copy->name);
						cart[j].price=copy->price;
						cart[j].quantity=copy->quantity;
						j++;
						printf("SUCCESSFULLY ADDED TO THE MACHINE\n");
						update_list_add(chocolates,select_1,qty);
						update_file("chocolates.txt",chocolates);
					}
				}

                if (c2 == 4)
                {
                    S * biscuits=NULL;
					biscuits=read_file(biscuits,"biscuits.txt");
					display(biscuits);
					int select_1,qty;
					printf("TYPE THE ITEM YOU WANT TO ADD WITH ITS QUANTITY\n");
					scanf("%d %d",&select_1,&qty);
					if(select_1>10 && select_1<1)
						{printf("INVALID CHOICE\n");}
					else
					{	
						S * copy;
						copy= copy_data(snacks,select_1,qty);
						strcpy(cart[j].name,copy->name);
						cart[j].price=copy->price;
						cart[j].quantity=copy->quantity;
						j++;
						printf("SUCCESSFULLY ADDED TO THE MACHINE\n");
						update_list_add(biscuits,select_1,qty);
						update_file("biscuits.txt",biscuits);
					}
                }


				if (c2 == 5)
                {
                    S * cakes=NULL;
					cakes=read_file(cakes,"cakes.txt");
					display(cakes);
					int select_1,qty;
					printf("TYPE THE ITEM YOU WANT TO ADD WITH ITS QUANTITY\n");
					scanf("%d %d",&select_1,&qty);
					if(select_1>10 && select_1<1)
						{printf("INVALID CHOICE\n");}
					else
					{	
						S * copy;
						copy= copy_data(cakes,select_1,qty);
						strcpy(cart[j].name,copy->name);
						cart[j].price=copy->price;
						cart[j].quantity=copy->quantity;
						j++;
						printf("SUCCESSFULLY ADDED TO THE MACHINE\n");
						update_list_add(cakes,select_1,qty);
						update_file("cakes.txt",cakes);
					}
                }
                scanf("%d",&c2);
                if (c2 == 0)
                    break;
            }
        }
        if (c1 == 3)
        {
            int c3;
            printf("PRESS 1 TO REMOVE ITEMS IN SNACKS\n");
            printf("PRESS 2 TO REMOVE ITEMS IN BEVERAGES\n");
            printf("PRESS 3 TO REMOVE ITEMS IN CHOCOLATES\n");
            printf("PRESS 4 TO REMOVE ITEMS IN BISCUITS\n");
			printf("PRESS 5 TO REMOVE ITEMS IN CAKES\n");
            printf("PRESS 0 TO EXIT THE REMOVE ITEMS MODE\n");
            scanf("%d",&c3);
            while(c3 != 0)
            {
                if (c3 == 1)
                {
                    S * snacks=NULL;
				    snacks=read_file(snacks,"snacks.txt");
				    display(snacks);
				    int select_1,qty;
				    printf("TYPE THE ITEM YOU WANT TO REMOVE WITH ITS QUANTITY\n");
				    scanf("%d %d",&select_1,&qty);
				    if(select_1>10 && select_1<1)
					{printf("INVALID CHOICE\n");}
				    else
				    {
					    update_list(snacks,select_1,qty);
						update_file("snacks.txt",snacks);
					    printf("SUCCESSFULLY REMOVED FROM THE MACHINE\n");
				    }
                }


                if (c3 == 2)
                {
                    S * beverages=NULL;
				    beverages=read_file(beverages,"beverages.txt");
				    display(beverages);
				    int select_1,qty;
				    printf("TYPE THE ITEM YOU WANT TO REMOVE WITH ITS QUANTITY\n");
				    scanf("%d %d",&select_1,&qty);
				    if(select_1>10 && select_1<1)
					{printf("INVALID CHOICE\n");}
				    else
				    {
					    update_list(beverages,select_1,qty);
						update_file("beverages.txt",beverages);
					    printf("SUCCESSFULLY REMOVED FROM THE MACHINE\n");
				    }
                }


                if (c3 == 3)
                {
                    S * chocolates=NULL;
				    chocolates=read_file(chocolates,"chocolates.txt");
				    display(chocolates);
				    int select_1,qty;
				    printf("TYPE THE ITEM YOU WANT TO REMOVE WITH ITS QUANTITY\n");
				    scanf("%d %d",&select_1,&qty);
				    if(select_1>10 && select_1<1)
					    {printf("INVALID CHOICE\n");}
				    else
				    {
					    update_list(chocolates,select_1,qty);
						update_file("chocolates.txt",chocolates);
					    printf("SUCCESSFULLY REMOVED FROM THE MACHINE\n");
				    }
            
                }


                if (c3 == 4)
                {
                    S * biscuits=NULL;
				    biscuits=read_file(biscuits,"biscuits.txt");
				    display(biscuits);
				    int select_1,qty;
				    printf("TYPE THE ITEM YOU WANT TO REMOVE WITH ITS QUANTITY\n");
				    scanf("%d %d",&select_1,&qty);
				    if(select_1>10 && select_1<1)
					    {printf("INVALID CHOICE\n");}
				    else
				    {
					    update_list(biscuits,select_1,qty);
						update_file("biscuits.txt",biscuits);
				        printf("SUCCESSFULLY REMOVED FROM THE MACHINE\n");
				    }
            
                }


				if (c3 == 5)
                {
                    S * cakes=NULL;
				    cakes=read_file(cakes,"cakes.txt");
				    display(cakes);
				    int select_1,qty;
				    printf("TYPE THE ITEM YOU WANT TO REMOVE WITH ITS QUANTITY\n");
				    scanf("%d %d",&select_1,&qty);
				    if(select_1>10 && select_1<1)
					    {printf("INVALID CHOICE\n");}
				    else
				    {
					    update_list(cakes,select_1,qty);
				        update_file("cakes.txt",cakes);
					    printf("SUCCESSFULLY REMOVED FROM THE MACHINE\n");
				    }
            
                }
                scanf("%d",&c3);
                if (c3 == 0)
                    break;

            }
        }
        scanf("%c",&c1);
        if (c1 == 'E')
            break;
    }
    exit(0);

}
    

    


