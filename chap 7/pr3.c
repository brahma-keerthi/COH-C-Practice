/* This program uses the array to store the multiplication table of the number 5*/

#include <stdio.h>

void main()
{
    int arr[10], i;

    printf("The multiplication table of 5 is\n");
    
    for(i=1; i<=10; i++)
    {
        arr[i-1] = 5 * i;
        printf("%d\n", arr[i-1]);
    }
}