// This program will allocate the memory dynamically using the malloc function

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr, i, a;

    printf("Enter the number of number which you will enter:\n");
    scanf("%d", &a);

    ptr = (int*)malloc(a*sizeof(int));

    printf("Enter the elements of the array:\n");
    for(i=0; i<a; i++)
    scanf("%d", ptr[i]);

    printf("The elements of the array given by the user are:\n");
    for(i=0; i<a; i++)
    printf("%d  ", ptr[i]);
}