/* This program will print the multication table in reverse order */

#include <stdio.h>

void main()
{
    int i, product;
    i=10;

    while(i>=1)
    {
        product = 10*i;
        printf("10 * %d = %d\n", i, product);
        i--;
    }

}