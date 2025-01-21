#include <stdio.h>

int main()
{
    int student_id, last_digit, sum = 0;

    scanf("%d", &student_id);

    // Find the last digit
    last_digit = student_id % 10;

    // Use switch case to find the summation of the next 3 numbers
    switch (last_digit)
    {
    case 0:
        sum = 1 + 2 + 3;
        break;
    case 1:
        sum = 2 + 3 + 4;
        break;
    case 2:
        sum = 3 + 4 + 5;
        break;
    case 3:
        sum = 4 + 5 + 6;
        break;
    case 4:
        sum = 5 + 6 + 7;
        break;
    case 5:
        sum = 6 + 7 + 8;
        break;
    case 6:
        sum = 7 + 8 + 9;
        break;
    case 7:
        sum = 8 + 9 + 10;
        break;
    case 8:
        sum = 9 + 10 + 11;
        break;
    case 9:
        sum = 10 + 11 + 12;
        break;
    }

    printf("Sum: %d\n", sum);

    return 0;
}