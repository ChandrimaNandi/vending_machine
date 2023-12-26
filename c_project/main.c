#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include "funcs.h" //header file included in every file
int main()
{ 
	S cart[50];
	int j=0;
	display_a();
	sleep(2); //time lapse of 2 sec
	int select_1;//for owner or costumer
	display_f();
        printf("YOUR CHOICE:\n");
        scanf("%d",&select_1); 
	while(1)
	{/*
		display_f();
		printf("YOUR CHOICE:\n");
		scanf("%d",&select_1);*/
		if(select_1<1 ||select_1>9||(select_1>2 && select_1<8)) //any of these is invalid choice
		{
			printf("INVALID CHOICE\n");
			sleep(1);
		}
		else if(select_1==2) //for owner to access
		{
			int password;
			int access_code=567123;
			printf("PLEASE ENTER THE PASSWORD\n");
			scanf("%d",&password);
			while(access_code!=password)
			{
				printf("SORRY! WRONG PASSWORD\n");
				printf("TRY AGAIN\n");
                                scanf("%d",&password);
			}
		        printf("CORRECT PASSWORD\n");
			owner();// owner function
			
	        }
		else
		{ 	
			while(1)
			{
				display_b();
				sleep(1);
				int select_2;
				printf("YOUR CHOICE\n"); //choice between snacks,beverages,etc
				scanf("%d",&select_2);
				if(select_2>9 ||select_2<1 ||(select_2>5 && select_2<8))
				{
					printf("INVALID CHIOCE:\n");
					sleep(1);
				}
				else
				{
					switch(select_2) //snacks
					{
						case 1:
							{
								int select_3;
								while(1)
								{
									menu();
									printf("YOUR CHOICE:\n");
									scanf("%d",&select_3);
									if(select_3<1 || select_3>9 ||( select_3>3 && select_3<8))
									{
										printf("INVALID CHOICE\n");
										sleep(1);
									}
									else
									{
										switch (select_3)
										{
											case 1:
												{
													S * snacks=NULL;
													snacks=read_file(snacks,"snacks.txt");
													display( snacks);
													sleep(1);
													break;
												}
											case 2:
												{
													if(j==0)
													{
														display_f();
													}
													else
													{
														for (int h=0;h<j;j++)
														{
															printf("ITEM %d DETAILS\n",h+1);
															printf("SELECTED-ITEM: %s\n",cart[h].name);
															printf("SELECTED-PRICE: %d\n",cart[h].price); 
															printf("SELECTED-QUANTITY: %d\n",cart[h].quantity);
														}
													}
												}
											case 3:
												{
													while(1)
													{
														S * snacks=NULL;
														snacks=read_file(snacks,"snacks.txt");
														display(snacks);
														int select_4,qty;
														printf("YOUR CHOICE\n");
														scanf("%d %d",&select_4,&qty);
														if(select_4>10 && select_4<1)
															{printf("INVALID CHOICE\n");}
														else if(select_4==10)
															{break;}
														else if(select_4==9)
															{exit (1);}
														else
														{	
															S * copy;
															copy= copy_data(snacks,select_4,qty);
															strcpy(cart[j].name,copy->name);
															cart[j].price=copy->price;
															cart[j].quantity=copy->quantity;
															j++;
															printf("SUCCESSFULLY ADDED TO CART\n");
															update_list(snacks,select_4,qty);
															update_file("snacks.txt",snacks);
														}
													}
												}
											case 8:
												{break;}
											case 9:
												{exit (1);}
									}
								}
							}
					}
					case 2: //beverages
 							{
                                                                int select_3;
                                                                while(1)
                                                                {
                                                                        menu();
                                                                        printf("YOUR CHOICE:\n");
                                                                        scanf("%d",&select_3);
                                                                        if(select_3<1 || select_3>9 ||( select_3>3 && select_3<8))
                                                                        {
                                                                                printf("INVALID CHOICE\n");
                                                                                sleep(1);
                                                                        }
                                                                        else
                                                                        {
                                                                                switch (select_3)
                                                                                {
                                                                                        case 1:
                                                                                                {
                                                                                                        S * beverages=NULL;
                                                                                                        beverages=read_file(beverages,"beverages.txt");
                                                                                                        display( beverages);
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                }
                                                                                        case 2:
                                                                                                {
                                                                                                        if(j==0)
                                                                                                        {
                                                                                                                display_f();
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                                for (int h=0;h<j;j++)
                                                                                                                {
                                                                                                                        printf("ITEM %d DETAILS\n",h+1);
                                                                                                                        printf("SELECTED-ITEM: %s\n",cart[h].name);
                                                                                                                        printf("SELECTED-PRICE: %d\n",cart[h].price);
                                                                                                                        printf("SELECTED-QUANTITY: %d\n",cart[h].quantity);
                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 3:
                                                                                                {
                                                                                                        while(1)
                                                                                                        {
                                                                                                                S * beverages=NULL;
                                                                                                                beverages=read_file(beverages,"beverages.txt");
                                                                                                                display( beverages);
                                                                                                                int select_4,qty;
                                                                                                                printf("YOUR CHOICE\n");
                                                                                                                scanf("%d %d",&select_4,&qty);
                                                                                                                if(select_4>10 && select_4<1)
                                                                                                                        {printf("INVALID CHOICE\n");}
                                                                                                                else if(select_4==10)
                                                                                                                        {break;}
                                                                                                                else if(select_4==9)
                                                                                                                        {exit (1);}
                                                                                                                else
                                                                                                                {
															S * copy;
                                                                                                                        copy=copy_data(beverages,select_4,qty);
                                                                                                                        strcpy(cart[j].name,copy->name);
                                                                                                                        cart[j].price=copy->price;
                                                                                                                        cart[j].quantity=copy->quantity;
                                                                                                                        j++;
                                                                                                                        printf("SUCCESSFULLY ADDED TO CART\n");
															update_list(beverages,select_4,qty);
                                                                                                                        update_file("beverages.txt",beverages);

                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 8:
                                                                                                {break;}
                                                                                        case 9:
                                                                                                {exit (1);}
                                                                        }
                                                                }
                                                        }
                                        }

					case 3: //chocolates
 							{
                                                                int select_3;
                                                                while(1)
                                                                {
                                                                        menu();
                                                                        printf("YOUR CHOICE:\n");
                                                                        scanf("%d",&select_3);
                                                                        if(select_3<1 || select_3>9 ||( select_3>3 && select_3<8))
                                                                        {
                                                                                printf("INVALID CHOICE\n");
                                                                                sleep(1);
                                                                        }
                                                                        else
                                                                        {
                                                                                switch (select_3)
                                                                                {
                                                                                        case 1:
                                                                                                {
                                                                                                        S * chocolates=NULL;
                                                                                                        chocolates=read_file(chocolates,"chocolates.txt");
                                                                                                        display(chocolates);
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                }
                                                                                        case 2:
                                                                                                {
                                                                                                        if(j==0)
                                                                                                        {
                                                                                                                display_f();
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                                for (int h=0;h<j;j++)
                                                                                                                {
                                                                                                                        printf("ITEM %d DETAILS\n",h+1);
                                                                                                                        printf("SELECTED-ITEM: %s\n",cart[h].name);
                                                                                                                        printf("SELECTED-PRICE: %d\n",cart[h].price); 
                                                                                                                        printf("SELECTED-QUANTITY: %d\n",cart[h].quantity);
                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 3:
                                                                                                {
                                                                                                        while(1)
                                                                                                        {
                                                                                                                S * chocolates=NULL;
                                                                                                                chocolates=read_file(chocolates,"chocolates.txt");
                                                                                                                display( chocolates);
                                                                                                                int select_4,qty;
                                                                                                                printf("YOUR CHOICE\n");
                                                                                                                scanf("%d %d",&select_4,&qty);
                                                                                                                if(select_4>10 && select_4<1)
                                                                                                                        {printf("INVALID CHOICE\n");}
                                                                                                                else if(select_4==10)
                                                                                                                        {break;}
                                                                                                                else if(select_4==9)
                                                                                                                        {exit (1);}
                                                                                                                else
                                                                                                                {
														 	S * copy;
                                                                                                                        copy=copy_data(chocolates,select_4,qty);
                                                                                                                        strcpy(cart[j].name,copy->name);
                                                                                                                        cart[j].price=copy->price;
                                                                                                                        cart[j].quantity=copy->quantity;
                                                                                                                        j++;
                                                                                                                        printf("SUCCESSFULLY ADDED TO CART\n");
															update_list(chocolates,select_4,qty);
                                                                                                                        update_file("chocolates.txt",chocolates);

                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 8:
                                                                                                {break;}
                                                                                        case 9:
                                                                                                {exit (1);}
                                                                        }
                                                                }
                                                        }
                                        }

					case 4: //biscuits
 							{
                                                                int select_3;
                                                                while(1)
                                                                {
                                                                        menu();
                                                                        printf("YOUR CHOICE:\n");
                                                                        scanf("%d",&select_3);
                                                                        if(select_3<1 || select_3>9 ||( select_3>3 && select_3<8))
                                                                        {
                                                                                printf("INVALID CHOICE\n");
                                                                                sleep(1);
                                                                        }
                                                                        else
                                                                        {
                                                                                switch (select_3)
                                                                                {
                                                                                        case 1:
                                                                                                {
                                                                                                        S * biscuits=NULL;
                                                                                                        biscuits=read_file(biscuits,"biscuits.txt");
                                                                                                        display( biscuits);
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                }
                                                                                        case 2:
                                                                                                {
                                                                                                        if(j==0)
                                                                                                        {
                                                                                                                display_f();
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                                for (int h=0;h<j;j++)
                                                                                                                {
                                                                                                                        printf("ITEM %d DETAILS\n",h+1);
                                                                                                                        printf("SELECTED-ITEM: %s\n",cart[h].name);
                                                                                                                        printf("SELECTED-PRICE: %d\n",cart[h].price);
                                                                                                                        printf("SELECTED-QUANTITY: %d\n",cart[h].quantity);
                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 3:
                                                                                                {
                                                                                                        while(1)
                                                                                                        {
                                                                                                                S * biscuits=NULL;
                                                                                                                biscuits=read_file(biscuits,"biscuits.txt");
                                                                                                                display( biscuits);
                                                                                                                int select_4,qty;
                                                                                                                printf("YOUR CHOICE\n");
                                                                                                                scanf("%d %d",&select_4,&qty);
                                                                                                                if(select_4>10 && select_4<1)
                                                                                                                        {printf("INVALID CHOICE\n");}
                                                                                                                else if(select_4==10)
                                                                                                                        {break;}
                                                                                                                else if(select_4==9)
                                                                                                                        {exit (1);}
                                                                                                                else
                                                                                                                {
														        S * copy;
                                                                                                                        copy=copy_data(biscuits,select_4,qty);
                                                                                                                        strcpy(cart[j].name,copy->name);
                                                                                                                        cart[j].price=copy->price;
                                                                                                                        cart[j].quantity=copy->quantity;
                                                                                                                        j++;
                                                                                                                        printf("SUCCESSFULLY ADDED TO CART\n");
															update_list(biscuits,select_4,qty);
                                                                                                                        update_file("biscuits.txt",biscuits);

                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 8:
                                                                                                {break;}
                                                                                        case 9:
                                                                                                {exit (1);}
                                                                        }
                                                                }
                                                        }
                                        }

					case 5: //cakes
  							{
                                                                int select_3;
                                                                while(1)
                                                                {
                                                                        menu();
                                                                        printf("YOUR CHOICE:\n");
                                                                        scanf("%d",&select_3);
                                                                        if(select_3<1 || select_3>9 ||( select_3>3 && select_3<8))
                                                                        {
                                                                                printf("INVALID CHOICE\n");
                                                                                sleep(1);
                                                                        }
                                                                        else
                                                                        {
                                                                                switch (select_3)
                                                                                {
                                                                                        case 1:
                                                                                                {
                                                                                                        S * cakes=NULL;
                                                                                                        cakes=read_file(cakes,"cakes.txt");
                                                                                                        display( cakes);
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                }
                                                                                        case 2:
                                                                                                {
                                                                                                        if(j==0)
                                                                                                        {
                                                                                                                display_f();
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                                for (int h=0;h<j;j++)
                                                                                                                {
                                                                                                                        printf("ITEM %d DETAILS\n",h+1);
                                                                                                                        printf("SELECTED-ITEM: %s\n",cart[h].name);
                                                                                                                        printf("SELECTED-PRICE: %d\n",cart[h].price);
                                                                                                                        printf("SELECTED-QUANTITY: %d\n",cart[h].quantity);
                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 3:
                                                                                                {
                                                                                                        while(1)
                                                                                                        {
                                                                                                                S * cakes=NULL;
                                                                                                                cakes=read_file(cakes,"cakes.txt");
                                                                                                                display( cakes);
                                                                                                                int select_4,qty;
                                                                                                                printf("YOUR CHOICE\n");
                                                                                                                scanf("%d %d",&select_4,&qty);
                                                                                                                if(select_4>10 && select_4<1 ||( select_3>4 && select_3<9))
                                                                                                                        {printf("INVALID CHOICE\n");}
                                                                                                                else if(select_4==10)
                                                                                                                        {break;}
                                                                                                                else if(select_4==9)
                                                                                                                        {exit (1);}
                                                                                                                else
                                                                                                                {
															S * copy;
                                                                                                                        copy=copy_data(cakes,select_4,qty);
                                                                                                                        strcpy(cart[j].name,copy->name);
                                                                                                                        cart[j].price=copy->price;
                                                                                                                        cart[j].quantity=copy->quantity;
                                                                                                                        j++;
                                                                                                                        printf("SUCCESSFULLY ADDED TO CART\n");
															update_list(cakes,select_4,qty);
                                                                                                                        update_file("cakes.txt",cakes);
                                                                                                                }
                                                                                                        }
                                                                                                }
                                                                                        case 8:
                                                                                                {break;}
                                                                                        case 9:
                                                                                                {exit (1);}
                                                                        }
                                                                }
                                                        }
                                        }
					case 9:
						{exit (1);}
                                        
				}
			}
		} 
	}
        printf("THESE ARE THE ITEMS IN YOUR CART\n");
        for (int h=0;h<j;j++)
        {
         printf("ITEM %d DETAILS\n",h+1);
         printf("SELECTED-ITEM: %s\n",cart[h].name);
         printf("SELECTED-PRICE: %d\n",cart[h].price);
         printf("SELECTED-QUANTITY: %d\n",cart[h].quantity);
        }
	S s;
        int* p = grand_total(cart,s);
        printf("PRESS P TO PROCEED FOR PAYMENT\n");
        printf("PRESS E TO EXIT\n");
        char pay;
        scanf("%c",&pay);
        while(1)
        {
                if (pay == 'P')
                {
                        payment(cart,s,p);
                        break;
                }
                else if (pay == 'E')
                        exit(1);
                else
                {
                        printf("INVALID CHOICE\n");
                        printf("PLEASE TRY AGAIN\n");
                }
                scanf("%c",&pay);
        }
	return 0;
}
}
