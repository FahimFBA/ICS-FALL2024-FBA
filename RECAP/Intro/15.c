#include <stdio.h>

int main()
{
    float number;

    scanf("%f", &number);

    // (a) Print the number right justified within 10 columns
    printf("(a) Val:%10.6f\n", number);

    // (b) Print the number to be right justified to 2 columns
    printf("(b) Val:%2.6f\n", number);

    // (c) Print the number rounded to two decimal places
    printf("(c) Val:%.2f\n", number);

    // (d) Print the number rounded to integer (without using conversion or type casting)
    printf("(d) Val:%.0f\n", number);

    // (e) Prints the number in exponential notation/scientific notation
    printf("(e) Val:%.6e\n", number);

    return 0;
}