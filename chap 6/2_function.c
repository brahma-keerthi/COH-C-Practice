/* This program will print the address of the variable and then it pass the variable to a function and then it will obtain the address of the variable of the function */

#include<stdio.h>

void print(int i)
{
    printf("The address of the variable after passing to the function is %d", &i);
}

void main()
{
    int i = 2;

    printf("The address of the variable i before passing it to the function is %d\n", &i);
    print(i);
}

/*   The a address of the variable are different because the copy of the variable is passed to the function */