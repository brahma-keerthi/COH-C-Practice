// This program will give the use of the loop in the structure

#include<stdio.h>
#include<string.h>

struct employee{
    char name[30];
    int code;
    float salary;
};

void main()
{
    struct employee e1, e2, e3;

    for(int i=1; i<4; i++)
    {
        printf("Enter the name of the employee%d:  ", i);


    }
}