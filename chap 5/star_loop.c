/* This program will print the required pattern by using the loop */

#include <stdio.h>

void main()
{
    int a;
    printf("Enter upto which line the pattern has to printed:");
    scanf("%d", &a);

    for(int i=1; i<=a; i++)  // This tells num of rows
    {
        for(int j=1; j<=(2*i-1); j++)  // This the num of the star in the row
        {
            printf("*");
        }
        printf("\n");
    }
}