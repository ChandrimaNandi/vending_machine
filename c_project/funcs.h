void display_1();
typedef struct structure S;

struct structure
{
	char name[31]; 
        int weight; 
        int price; 
        int quantity; 
        S * next;
};

S * insert_product(S * head,S * new);
S * read_file(S * head,char * filename);
S * delete(S * head,int n);
S * update_list(S * head,int n,int k);
S * update_list_add(S * head,int n,int k);
S * copy_data(S * head,int n,int k);
void display(S * head);
void display_d(S * head);
void display_e(S * head);
void display_f();
void update_file(char *filename,S * head);

void owner();
void payment(S * a[],S s,int * p);
int * grand_total(S* a[],S s); //a is array of structure we dont know how to define
void print_bill(S * a[],S s,int * p); //a wale ka scene same hai

void display_a(void);
void display_b();
void display_c();
void menu(void);

