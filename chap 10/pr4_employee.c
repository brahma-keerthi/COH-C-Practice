// This program will create a text document of employees and their salary

#include <stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("employee4.txt", "w");

    char st1[10], st[10];
    int a, a1, i = 0;
    printf("Enter the employee name and salary of employee1:\n");
    gets(st1);
    scanf("%d", &a);

    fprintf(ptr, "Employee Name      Salary\n\n");
    i=0;
    while (st1[i] != '\0')
    {
        fputc(st1[i], ptr);
        i++;
    }
    fprintf(ptr, "           %d\n", a);

    printf("Enter the employee name and salary of employee2:\n");
    scanf("%s", &st);
    //gets(st); -->not working for this program 
    scanf("%d", &a1);

    i = 0;
    while (st[i] != '\0')
    {
        fputc(st[i], ptr);
        i++;
    }
    fprintf(ptr, "          %d", a1);
}