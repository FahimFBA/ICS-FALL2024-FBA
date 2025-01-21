#include <stdio.h>

int main()
{
    int a, b, c;
    int max_value;
    scanf("%d %d %d", &a, &b, &c);

    // Calculate all possible combinations
    int sum_ab_mul_c = (a + b) * c;
    int sum_ac_mul_b = (a + c) * b;
    int sum_bc_mul_a = (b + c) * a;

    // Find the maximum value
    max_value = sum_ab_mul_c;
    if (sum_ac_mul_b > max_value)
    {
        max_value = sum_ac_mul_b;
    }
    if (sum_bc_mul_a > max_value)
    {
        max_value = sum_bc_mul_a;
    }

    // Print the result
    printf("Maximum value: %d\n", max_value);

    return 0;
}