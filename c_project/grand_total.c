#include "funcs.h"
//typedef struct structure S;
/*
typedef struct structure
{
        char name[31];
        int weight;
        int price;
        int quantity;
        S * next;
} S;
*/
int * grand_total(S * a[],S s)
{
    int t =0;
    int *p; 
    int l = (sizeof(a))/(sizeof(s));
    for (int j=0;j<l;j++)
    {
        int k;
        k = (a[j]->quantity)*(a[j]->price);
        t = t+k;

    }
    p = &t;
    return (p);
} 
