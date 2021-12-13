// This program will allocate the memory be calloc 

// Calloc function will create the memory and initiates it with zero

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr, a, i;

    printf("Enter the numbers of numbers of the arrays: ");
    scanf("%d", &a);

    ptr = (int *)calloc(a, sizeof(int));     // calloc function will initiate the all the numbers of the array to zero

    printf("Enter the contents: \n");
    for(i=0; i<(a-2); i++)
    scanf("%d", &ptr[i]);

    printf("You have entered the elements: \n");
    for(i=0; i<a; i++)
    printf("%d  ", ptr[i]);
}