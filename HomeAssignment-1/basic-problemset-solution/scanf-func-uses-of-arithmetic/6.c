#include <stdio.h>

#define PI 3.14159 // you can ignore this line if you use 3.14159 directly in the expression

int main()
{
    float radius, area;

    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // or, you can directly use this expression in printf

    // or,
    // area = 3.14159 * radius * radius;

    // Print the result
    printf("Area = %.5f\n", area);

    return 0;
}