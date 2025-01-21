#include <stdio.h>

int main()
{
    int student_id;
    char operator;
    int last_digit;
    int result;

    scanf("%d %c", &student_id, &operator);

    // Extract the last digit
    last_digit = student_id % 10;

    // Perform the operation three times using switch case
    switch (operator)
    {
    case '*':
        result = last_digit * last_digit * last_digit;
        printf("%d * %d * %d = %d\n", last_digit, last_digit, last_digit, result);
        break;
    case '+':
        result = last_digit + last_digit + last_digit;
        printf("%d + %d + %d = %d\n", last_digit, last_digit, last_digit, result);
        break;
    case '-':
        result = last_digit - last_digit - last_digit;
        printf("%d - %d - %d = %d\n", last_digit, last_digit, last_digit, result);
        break;
    default:
        printf("The input is invalid\n");
    }

    return 0;
}