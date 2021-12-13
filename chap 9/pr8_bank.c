// This program wil take the details of the bank customers

#include<stdio.h>

typedef struct bank{
    int account_num;
    char name[9];
    int trans;
    int balance;
}ban;

void main()
{
    ban v;
    printf("Enter the account number of the customer: ");
    scanf("%d", &v.account_num);

    printf("Enter the name of acc holder: ");
    scanf("%s", v.name);

    printf("\nName of Account holder: %s\nAccount number: %d", v.name, v.account_num );
}