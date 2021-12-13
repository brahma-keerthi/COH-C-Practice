/* This program will reverse the contents of the array by using the function */

#include<stdio.h>

void rev(int *arr, int n)
{
    int i;
    for(i=0; i<n/2; i++)
    {
        int temp = arr[n-i-1];
        arr[n-i-1] = arr[i];
        arr[i] = temp;
    }

    for(i=0; i<n; i++)
    printf("%d\n", arr[i]);

}

void main()
{
    int arr[50], i, n;

    printf("Enter the number of the elements which array has to hold:");
    scanf("%d", &n);

    printf("Enter the contents of the array:");
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);

    printf("After the reversing the array the given array becomes\n");
    rev(arr , n);
}