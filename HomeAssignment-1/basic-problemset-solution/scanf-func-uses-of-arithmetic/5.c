#include <stdio.h>

int main()
{
    float a, b, c, d; // declare four floating-point variables
    float result;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Calculate the expression
    result = (a + b - c) * d - a / d; // you can directly use this expression in printf

    // Print the result
    printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %.6f\n", a, b, c, d, a, d, result);

    // or
    // printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %.6f\n", a, b, c, d, a, d, (a + b - c) * d - a / d);

    // or
    // printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %.6f\n", a, b, c, d, a, d, ((a + b - c) * d - a / d));

    return 0;
}