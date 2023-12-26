VENDING MACHINE :
	This is a project in which we have built a vending machine named "HANGRY VENDS!"

PURPOSE:
	We have taken inspiration from "JustVend" along with some new functions.This provides a kind of realistic outlook of a vending machine which saves time and is efficient.

LOGIC:
	The whole program works on the concepts of file I/O, linked lists, arrays, structures and pointers.

VEND_FUNCTIONS:
1.READ_FILE:
	Input from the file is stored in array of structures for one category.
	Each element of the array is linked using insert_product function.
	Now, we have linked list of items for one category
	(eg:linked list of items in snacks)
	We are returning the head of the list.
2.INSERT_PRODUCT:
	The function takes head and new node as parameter and inserts the new node into the linked list.And returns the head of the list
3.Delete:
	The function takes the head and n (nth node) and deletes the nth node from the linked list .Returns the head at the end.
4.UPDATE_LIST:
	This function update the nth node whenever k items are removed and deletes nth node from the list if quantity is zero.
5.DISPLAY:
	It prints all the contents of the linked list.
6.COPY DATA:
	The function copies the nth node from the linked list into a temperory structure and returns it.
7.UPDATE_FILE:
	The function updates the file whenever the user selects an item.
8.UPDATE_FILE_ADD:
	The function is used by owner whenever he/she needs to add an item into the machine.
CONTRIBUTION:
	SANIYA ISMAIL KONDKAR	IMT2022128
	VARSHA YAMSANI		IMT2022506



	
DISPLAY:
	
1.DISPLAY_A:
	Displays the name of vending machine
2.DISPLAY_B:
	Displays the available options for the consumer service
3.DISPLAY_C:
	Displays whenever the cart is empty
4.DISPLAY_F:
	Displays the options for  owner/costumer service
5.DISPLAY_D and DISPLAY_E:
	Both are used to print the contents of the cart
6.MENU:
	Available options for the user are displayed
MAIN:


1.First the user has an option to select either customer service or owner service
if customer service is selected then:
1.User has option to select the category of items(eg:snacks,beverages etc).
2.Then he has options to
	-read all the products.
	-look at the cart.
	-select items in the specific category.This runs in loop.(to go back user has to press 10)
	-go back to select different category of products
	-or to exit
3.He can also go back on pressing 8 to select other category of items.
4.Then in the last user have option to pay the required amount.
if owner service is selected then:
1.We are required to enter the password.
2.password is 567123.
if the password is correct then the owner has the option to refill the items in the vending machine.


CONTRIBUTION:
	VENIGALLA SOWMYA IMT2022537
	TRUPTI KHODWE    IMT2022007



1.OWNER :
This function is accessible only if the owner enters the correct password
Then the owner is provided with a list which includes options such as displaying the items of the vending machine,adding,removing 
and exiting the owner mode.
	If the owner selects 1 - all the items are printed in the terminal
	If the owner selects 2 - then the owner is given a choice to select from the categories provided which again has sub-choices
							 the owner is supposed to enter his desired quantity in 'quantity' variable
		if the owner selects 1 : adds 'quantity' items in snacks
		if the owner selects 2 : adds 'quantity' items in beverages
		if the owner selects 3 : adds 'quantity' items in chocolates
		if the owner selects 4 : adds 'quantity' items in biscuits
		if the owner selects 5 : adds 'quantity' items in cakes
		if the owner selects 0 : exits from add_items 
	If the owner selects 3 - then the owner is given a choice to select from the categories provided which again has sub-choices
							 the owner is supposed to enter his desired quantity in 'quantity' variable
		if the owner selects 1 : deletes 'quantity' items in snacks
		if the owner selects 2 : deletes 'quantity' items in beverages
		if the owner selects 3 : deletes 'quantity' items in chocolates
		if the owner selects 4 : deletes 'quantity' items in biscuits
		if the owner selects 5 : deletes 'quantity' items in cakes
		if the owner selects 0 : exits from add_items 
	If the owner selects 'E' - then it exits from the owner mode

2.GRAND_TOTAL :
This function returns a pointer of the total payable amount i.e 'p'
It computes the length of the cart i.e 'a'
It stores the total amount in 't' and returns the pointer to 't'

3.PAYMENT :
This function deals with Transaction
If the user pays same amount as the total payable amount then it calls the "print_bill" function
If the user pays more than the total payable amount , excess money is calculated and stored in 'wallet'
If the user pays less than the total payable amount , it goes into a loop which doesnt stop until it becomes equal or more than the total payable amount.

4.PRINT_BILL :
This function prints the bill of the order placed.
It takes the cart array, the structure s and the pointer to the total payable amount.
It prints Name , Price , Quantity , Subtotal and the Grandtotal in a bill format.
Atlast it prints a concluding message.

	
CONTRIBUTION:
	NUPUR PATIL       IMT2022520
	CHANDRIMA NANDI   IMT2022062


1.MAKEFILE:
This is the makefile of the entire C project which includes all the files used in our project which are as follows:
	main.c
	display.c
	vend_func.c
	owner.c
	print_bill.c
	grand_total.c
	payment.c
This enables the 'make' command to compile the different program pieces and builds a final executable file 'cproj' in this case.

CONTRIBUTION:
	CHANDRIMA NANDI   IMT2022062
	TRUPTI KHODWE     IMT2022007
