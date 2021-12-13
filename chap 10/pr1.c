// This program will read the 3 integers from the text file

#include<stdio.h>

void main(){
    FILE *ptr;
    ptr = fopen("pr1.txt", "r");

    int a, b, c;

    fscanf(ptr, "%d%d%d", &a, &b, &c);

    fclose(ptr);

    printf("The three read from the file are %d, %d, %d", a, b, c);
}