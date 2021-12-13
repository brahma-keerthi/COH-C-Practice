// This program will illustrates the use of the arrow operator 

#include<stdio.h>
#include <string.h>

struct shop{
    char product[7];
    int item;
    float rate;
};

void main()
{
    struct shop a;
    struct shop *ptr;
    ptr = &a;

    strcpy(a.product, "coffee");
    a.item = 5;
    a.rate = 25.3;

    printf("%s and %d and %f\n", (*ptr).product, (*ptr).item, (*ptr).rate);
    printf("%s and %d and %f", ptr->product, ptr->item, ptr->rate);
}