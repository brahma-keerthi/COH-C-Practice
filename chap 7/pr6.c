/* This program will count the number of the positive integers in an given array by function */

#include <stdio.h>

void num (int *arr, int n)
{
    int i, count;

    for(i=0, count=0; i<n; i++)
    {
        if(arr[i]>0)
        count++;
    }

    printf("The number of positive integers in a given set of array is %d", count);
}

void main()
{
    int arr[50], n, i;

    printf("Enter the number of elements that the array has to store:");
    scanf("%d", &n);

    printf("Give the contents of the Array:");

    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);

    num(arr, n);
}