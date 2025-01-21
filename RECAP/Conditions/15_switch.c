#include <stdio.h>

int main()
{
    int X, n1, n2, n3;
    int flag = 0;

    printf("Enter Player-1's number and Player-2's three guesses: ");
    scanf("%d %d %d %d", &X, &n1, &n2, &n3);

    switch (n1 == X)
    {
    case 1:
        printf("Right, Player-2 wins!\n");
        flag = 1;
        break;
    case 0:
        printf("Wrong, 2 Chance(s) Left!\n");
        break;
    }

    switch (flag)
    {
    case 0:
        switch (n2 == X)
        {
        case 1:
            printf("Right, Player-2 wins!\n");
            flag = 1;
            break;
        case 0:
            printf("Wrong, 1 Chance(s) Left!\n");
            break;
        }
        break;
    }

    switch (flag)
    {
    case 0:
        switch (n3 == X)
        {
        case 1:
            printf("Right, Player-2 wins!\n");
            break;
        case 0:
            printf("Player-1 wins!\n");
            break;
        }
        break;
    }

    return 0;
}