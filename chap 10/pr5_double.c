// This program will read the integer from the file and will write the double of it

#include<stdio.h>

void main(){
    FILE *ptr;
    ptr = fopen("double5.txt", "r");

    int st[7];
    fscanf(ptr, "%d%d%d%d%d", &st[0], &st[1], &st[2], &st[3], &st[4]);

    ptr = fopen("double5.txt", "w");
    fprintf(ptr, "%d %d %d %d %d", st[0]*2, st[1]*2, st[2]*2, st[3]*2, st[4]*2);
}