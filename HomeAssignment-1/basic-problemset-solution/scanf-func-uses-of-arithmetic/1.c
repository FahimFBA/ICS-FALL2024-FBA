#include <stdio.h>

int main()
{
    int integerValue; // declare an integer variable
    float floatValue; // declare a floating point variable

    // Input values
    scanf("%d %f", &integerValue, &floatValue);

    // Print values
    printf("Integer value = %d\n", integerValue);
    printf("Floating point value = %.3f\n", floatValue);
    return 0;
}