/* This is a number guessing game played between 2 players */

#include <stdio.h>

void main()
{
    long int num1, num2, range1, range2;

    char player1[10], player2[10];

    printf("This game is played between two players.\nEach player has maximum of 5 chances to guess the number give by other player correctly:\n");

    printf("Enter the name of the Player1:");
    scanf("%s", &player1);
    printf("Enter the name of the Player2:");
    scanf("%s", &player2);
TOP:
    printf("%s\nGive the range of numbers for this GAME:", player1);
    scanf("%ld", &range1);
    printf("To :");
    scanf("%ld", &range2);

START1:
    printf("\n%s,\n   Give the number in the given range [%d to %d]:", player1, range1, range2);
    scanf("%ld", &num1);

    if (num1 > range2 || num1 < range1)
    {
        printf("Your number is not in the given range.\nGive the number in the range %d to %d", range1, range2);
        goto START1;
    }

    int count1, count2, n1, n2;

    for (count1 = 1; count1 <= 5;)
    {
        printf("\n\n%s,\nChance-%d\n   Guess your number:\n\n", player2, count1);
        scanf("%d", &n1);

        if (n1 == num1)
        {
            printf("%s guessed the number %d Correctly in Chance %d", player2, num1, count1);
            goto START2;
        }

        if (n1 > num1)
        {
            printf("%d is greater than that number\n\n", n1);
        }

        if (n1 < num1)
        {
            printf("%d is lesser than that number\n\n", n1);
        }
        count1++;
    }

    printf("%s did not guess the number %d correctly", player2, num1);

START2:
    printf("\n\n%s,\n   Give the number in the given range [%d to %d]:", player2, range1, range2);
    scanf("%ld", &num2);

    if (num2 > range2 && num2 < range1)
    {
        printf("Your number is not in the given range.\nGive the number in the range %d to %d", range1, range2);
        goto START2;
    }

    for (count2 = 1; count2 <= 5;)
    {
        printf("%s,\nChance-%d\n   Guess your number:", player1, count2);
        scanf("%d", &n2);

        if (n2 == num2)
        {
            printf("%s guessed the number %d Correctly in Chance %d\n\n", player1, num2, count2);
            goto SECOND;
        }

        if (n2 > num2)
        {
            printf("%d is greater than that number\n\n", n2);
        }

        if (n2 < num2)
        {
            printf("%d is lesser than that number\n\n", n2);
        }
        count2++;
    }

    printf("%s did not guess the number %d correctly\n\n", player1, num2);

    printf("The game is restarting:");
    goto TOP;

SECOND:
    if (n1 == num1 && n2 == num2)
    {
        if (count1 < count2)
        {
            printf("%s is the winner with %d chances and overtaking %s who took %d chances", player2, count1, player1, count2);
            printf("/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*****      %s is the WINNER!!!!         *****************************", player2);
        }

        else if (count1 > count2)
        {
            printf("%s is the winner with %d chances and overtaking %s who took %d chances", player1, count2, player2, count1);
            printf("/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*****      %s is the WINNER!!!!        *****************************", player1);
        }

        else
        {
            printf("*/*/*/*/*/*/*/*/*/*/     MATCH DRAW      */*/*/*/*/*/*/*/*/*/*/");
        }
    }

    else if (n1 == num1 && n2 != num2)
    {
        printf("*/*/*/*/*/*/*/*/*/*/*/     %s is the WINNER  */*/*/*/*/*/*/*/*/*", player2);
    }

    else if (n2 == num2 && n1 != num1)
    {
        printf("*/*/*/*/*/*/*/*/*/*/*/     %s is the WINNER  */*/*/*/*/*/*/*/*/*", player1);
    }
}