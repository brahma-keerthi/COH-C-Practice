/* This program will print the address of the variable and it uses the following address to print the following variable */

#include <stdio.h>

void main()
{
    int n = 2;

    printf("The address of the variable n is %d", &n);
    printf("\nThe value of the variable using the above address is %d", *(&n));


}
