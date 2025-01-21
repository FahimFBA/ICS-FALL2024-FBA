#include <stdio.h>
// #include <stdbool.h>
int main()
{
    double doubleValue1 = 3.14;
    int booleanValue1 = 1; // In C, 1 represents true

    // bool testBoolean = true;
    // printf("Boolean value %d\n" , testBoolean);

    double doubleValue2 = 1.618039;
    int booleanValue2 = 0; // In C, 0 represents false

    printf("The double value: %.6e\n", doubleValue1);
    printf("The boolean value: %d\n", booleanValue1);
    printf("The double value: %.6f\n", doubleValue2);
    printf("The boolean value: %d\n", booleanValue2);
}