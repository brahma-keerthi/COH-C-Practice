/* This program will perform the sum upto 10 natural numbers*/

#include<stdio.h>

void main()
{
    int i=1, sum=0;

    while(i<=10)
    {
        sum = sum + i;
        i++;
        
    }

    printf("The sum of the first 10 natural numbers is %d", sum);
}