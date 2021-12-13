// This program will print the address in the order for a three dimensional array

#include <stdio.h>

void main()
{
    int arr[50][50][50], i, j, k, a, b, c;
    int *ptr;

    printf("Enter the order the 3d array:\n");
    scanf("%d%d%d", &i, &j, &k);

    for (a = 0; a < i; a++)
    {
        for (b = 0; b < j; b++)
        {
            for (c = 0; c < k; c++)
            {
                ptr = &arr[a][b][c];
                printf("Adrress of  %d and %d and %d is %u\n", a, b, c, ptr);
            }
        }
    }
}