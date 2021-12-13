// This program will illustrates the use of the realloc fuction

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr, a, i;

    printf("Enter the size of the array: ");
    scanf("%d", &a);

    ptr = (int *)malloc(a*sizeof(int));
    
    printf("Enter the elements of the array: \n");
    for(i=0; i<a; i++)
    scanf("%d", &ptr[i]);

    printf("You had entered the elements: \n");
    for(i=0; i<a; i++)
    printf("%d  ", ptr[i]);

    printf("\nNow enter the new size of array: \n");
    scanf("%d", &a);

    (int *)realloc(ptr, a*sizeof(int));

    printf("Enter the elements of the array: \n");
    for(i=0; i<a; i++)
    scanf("%d", &ptr[i]);

    printf("You had entered the elements: \n");
    for(i=0; i<a; i++)
    printf("%d  ", ptr[i]);
}