#include <stdio.h>

int main()
{
    float num1, num2; // declare two floating-point variables

    // Input two floating-point values
    scanf("%f %f", &num1, &num2);

    printf("%.3f + %.3f = %.3f\n", num1, num2, num1 + num2);
    printf("%.3f - %.3f = %.3f\n", num1, num2, num1 - num2);
    printf("%.3f * %.3f = %.6f\n", num1, num2, num1 * num2);
    printf("%.3f / %.3f = %.6f\n", num1, num2, num1 / num2);

    return 0;
}