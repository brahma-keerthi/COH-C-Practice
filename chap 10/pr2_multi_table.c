// This program will genetrate a multiplication table file 

#include<stdio.h>

void main(){
    FILE *ptr;
    int a;
    printf("Enter the number whose multiplication table has to be generated: ");
    scanf("%d", &a);

    ptr = fopen("multiTable.txt", "w");
    int i, mul;

    fprintf(ptr, "The multiplication table of %d is\n", a);
    for(i=1; i<=10; i++){
        mul = i*a;
        fprintf(ptr, "%d * %d = %d\n", a, i, mul);
    }

    fclose(ptr);
}