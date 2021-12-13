// This program will create the multable of 15

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr, i, mul;

    ptr = (int *)calloc(10, sizeof(int));

    printf("The multable of 7 upto 10 is\n");
    for(i=0; i<10; i++)
    {
        mul = 7*(i+1);
        printf("7 * %d = %d\n",i+1, mul );
    }

    (int *)realloc(ptr, 15*sizeof(int));

    printf("\nThe multable of 7 upto 15 is\n");
    for(i=0; i<15; i++)
    {
        mul = 7*(i+1);
        printf("7 * %d = %d\n",i+1, mul );
    }
}