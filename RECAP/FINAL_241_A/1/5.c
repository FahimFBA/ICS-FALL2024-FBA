#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    // Find the last digit
    int last_digit = num % 10;

    // Print digits from last digit to 9 using switch case
    printf("Output: ");
    switch (last_digit)
    {
    case 0:
        printf("0");
    case 1:
        printf("1");
    case 2:
        printf("2");
    case 3:
        printf("3");
    case 4:
        printf("4");
    case 5:
        printf("5");
    case 6:
        printf("6");
    case 7:
        printf("7");
    case 8:
        printf("8");
    case 9:
        printf("9");
    }
    printf("\n");

    return 0;
}