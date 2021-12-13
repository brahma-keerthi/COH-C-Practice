/* This program is used to print the following pattern
                      *
                      ***
                      *****
                      *******
                      */

#include<stdio.h>

void pattern(int n);

void main()
{
    int a;
    printf("Enter the number of lines to which the pattern has to be printed:");
    scanf("%d", &a);

    pattern(a);
}

void pattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }

    pattern(n-1);
    for(int i=1; i<=(2*n-1) ; i++)
    {
        printf("*");
    }
    printf("\n");
}