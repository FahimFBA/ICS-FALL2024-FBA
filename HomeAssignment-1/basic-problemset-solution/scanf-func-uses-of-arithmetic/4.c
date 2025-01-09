#include <stdio.h>

int main()
{
    int a, b, c, d; // declare four integer variables
    int result;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Calculate the expression
    result = a * b + (a - c) / d + b; // you can directly use this expression in printf

    // Print the result
    printf("%d * %d + (%d - %d) / %d + %d = %d\n", a, b, a, c, d, b, result);

    // or
    // printf("%d * %d + (%d - %d) / %d + %d = %d\n", a, b, a, c, d, b, a * b + (a - c) / d + b);

    // or
    // printf("%d * %d + (%d - %d) / %d + %d = %d\n", a, b, a, c, d, b, (a * b + (a - c) / d + b));

    return 0;
}