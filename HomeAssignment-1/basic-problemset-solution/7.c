#include <stdio.h>

int main()
{
    int a, b, c, d; // declare four integer variables
    a = 21, b = 15, c = 34, d = 6; // initialize the integer variables

    int result = a * b + (a - c) / d + b; // calculate the result

    printf("%d * %d + (%d - %d) / %d + %d = %d\n", a, b, a, c, d, b, result); // print the result
}