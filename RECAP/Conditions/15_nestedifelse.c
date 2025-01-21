#include <stdio.h>

int main()
{
    int X, n1, n2, n3;

    printf("Enter Player-1's number and Player-2's three guesses: ");
    scanf("%d %d %d %d", &X, &n1, &n2, &n3);

    if (n1 == X)
    {
        printf("Right, Player-2 wins!\n");
    }
    else
    {
        printf("Wrong, 2 Chance(s) Left!\n");
        if (n2 == X)
        {
            printf("Right, Player-2 wins!\n");
        }
        else
        {
            printf("Wrong, 1 Chance(s) Left!\n");
            if (n3 == X)
            {
                printf("Right, Player-2 wins!\n");
            }
            else
            {
                printf("Player-1 wins!\n");
            }
        }
    }

    return 0;
}