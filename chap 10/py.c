// This program will build a python file

#include<stdio.h>

void main(){
    FILE *ptr;
    ptr = fopen("print.py", "w");

    char st[50];
    printf("Enter the python code:\n");
    gets(st);

    fprintf(ptr, "# This python code is generated by py.c file\n");

    int i=0;
    while(st[i] != '\0'){
        fputc(st[i], ptr);
        i++;
    }
    fclose(ptr);
}