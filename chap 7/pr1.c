/* This program will create an array and also illustrates the use of the pointers in the array*/

#include<stdio.h>

void main()
{
    int arr[10], i, *ptr;

    printf("Enter the values of the rows for an array:");
    for(i=0; i<10; i++)
    scanf("%d", &arr[i]);

    ptr = &arr[0];  // ptr stores the address of the first element of the array

    printf("The ptr + 2 shows the third element which is %d", *(ptr+2));  // ptr +2 stores the address of the 3rd element of the array
}