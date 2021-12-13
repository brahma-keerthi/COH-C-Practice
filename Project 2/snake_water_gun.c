#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int num, r;
    char a, comp;
    AGAIN:
    srand(time(0));
    num = rand()%100+1;

    printf("Let's Play SNAKE WATER GUN\n");
    printf("Select:\ns for Snake\nw for Water\ng for Gun\n");
    scanf("%c", &a);

    if( num%3 <= 33)
    comp = 's';

    else if( num%3 <=66)
    comp = 'w';

    else if( num%3 <= 100)
    comp = 'g';

    if( (comp =='s' && a == 'w') || (comp == 'w' && a == 'g') || (comp == 'g' && a == 's'))
        printf("COMPUTER IS WINNER\nYou selected %c and Computer selected %c", a, comp);

    else if((a == 's' && comp == 'w') || (a == 'w' && comp == 'g') || (a == 'g' && comp == 's'))
        printf("YOU ARE WINNER\nYou selected %c and Computer selected %c", a, comp);

    else
        printf("GAME DRAW\nBoth You and computer selected %c", a); 

    printf("\nDo you want to Play this again>>?\nPress 1 to Play Again\nPress 2 to exit\n");
    scanf("%d", &r);

    if(r==1)
    goto AGAIN;
}