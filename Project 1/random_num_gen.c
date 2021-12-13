/* This program will generate the random number in based on some header files */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int num;
    srand(time(0));
    num = rand();
    printf("The number generated is %d", num%100+1); //generates number only bertween the 1 to 100
}