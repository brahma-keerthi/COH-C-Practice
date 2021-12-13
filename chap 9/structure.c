// This program will illustrates the use of the structures

#include <stdio.h>
#include <string.h>

struct employee
{
    char name[15];
    int code;
    float salary;
};

void main()
{
    struct employee e1;
    strcpy(e1.name, gets(e1.name));
    scanf("%d", &e1.code);
    scanf("%f", &e1.salary);

    printf("name is %s\n", e1.name);
    printf("code is %d\n", e1.code);
    printf("salary is %.3f", e1.salary);
}