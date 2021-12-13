// This program will allocate the memory of a floating point number by malloc

#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    float *ptr;

    printf("Enter the number of numbers which you will input: ");
    scanf("%d", &n);

    ptr = (float*)malloc(n*sizeof(float));

    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    scanf("%f", &ptr[i]);

    printf("The given floating point numbers are:\n");
    for(int i=0; i<n; i++)
    printf("%.3f  ", ptr[i]); 
}