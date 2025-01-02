#include <stdio.h>

int main()
{
    float a, b, c, d; // declare four float variables

    a = 2.3, b = 5.8, c = 1.1, d = 3.5; // initialize the float variables

    float result = (a + b - c) * d - a / d; // calculate the result

    printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %f\n", a, b, c, d, a, d, result); // print the result
}