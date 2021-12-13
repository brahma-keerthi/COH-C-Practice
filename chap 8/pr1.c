// This program illustrate the use of string input 

#include<stdio.h>
#include<string.h>

void main()
{
    char st1[50], st2[50];
    int i;

    printf("Enter the string1\n");
    gets(st1);

    printf("Enter the string2\n");
    for(i=0; st2[i-1]!='\n'; i++)
    {
        scanf("%c", &st2[i]);
    }
    st2[i-1] = '\0';

    printf("string1 is %s\n", st1);
    printf("string2 is %s\n", st2);
    printf("Strcmp of string1 and string2 is %d", strcmp(st1, st2));
}