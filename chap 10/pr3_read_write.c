// This program will read and write the given data

#include<stdio.h>

void main(){
    FILE *ptr;

    ptr = fopen("read_write3.txt", "r");
    char st[50], c;

    c = fgetc(ptr);
    while(c != EOF){
        printf("The read char is %c\n", c);
        c = fgetc(ptr);
    }

    ptr = fopen("read_write3.txt", "w");

    printf("Enter the contents which has to be input to file: \n");
    gets(st);

    fputc(st[0],ptr);
    int i=1;
    while(st[i]!= '\0'){
        fputc(st[i], ptr);
        i++;
    }
    
    fclose(ptr);
}