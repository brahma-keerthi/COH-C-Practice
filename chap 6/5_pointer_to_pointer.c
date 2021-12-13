/* This program will print the value of the variable using pointer to pointer */

#include<stdio.h>

void main()
{
    int a=5;
    int *b = &a;
    int **c=&b;

    printf("The value of the variable a is %d ", **c);
}