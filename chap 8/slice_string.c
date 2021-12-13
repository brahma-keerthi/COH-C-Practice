// this program will slice the given strng between any two given characters

#include<stdio.h>

void slice(char *st, int a, int b)
{
    printf("The slice of the given string between %c and %c is \n", a, b);

    while(*st!='\0')
    {
        if(*st==a)
        {
            for(*st=a; *st!=b; st++)
            printf("%c", *st);

            printf("%c", *st);

            break;
        }    

        st++;
    }
}

void main()
{
    char st[50];
    char a, b;

    printf("Enter the string:\n");
    gets(st);

    printf("Enter the starting point:");
    scanf("%c", &a);
    fflush(stdin);

    printf("Enter the ending point:");
    scanf("%c", &b);

    slice(st, a, b);
}