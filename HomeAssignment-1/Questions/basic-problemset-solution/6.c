#include <stdio.h>

int main()
{
    float a, b; // declare two float variables
    a = 95.401, b = 22.622; // initialize the float variables

    printf("%.3f + %.3f = %.3f\n", a, b, a + b); // print the sum of two floats
    printf("%.3f - %.3f = %.3f\n", a, b, a - b); // print the difference of two floats
    printf("%.3f * %.3f = %f\n", a, b, a * b); // print the product of two floats
    printf("%.3f / %.3f = %f\n", a, b, a / b); // print the division of two floats

    // you can create separate variables for the sum, difference, product, and division
}