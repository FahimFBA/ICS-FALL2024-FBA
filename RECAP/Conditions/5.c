#include <stdio.h>

int main()
{
    int num;
    int is_power_of_two = 1; // Assuming it's a power of 2 initially

    // Read input from console
    printf("Enter a positive nonzero number: ");
    scanf("%d", &num);

    // Check if the number is positive and nonzero
    if (num <= 0)
    {
        printf("Invalid input. Please enter a positive nonzero number.\n");
        return 1;
    }

    // Check if the number is a power of 2
    if (num == 1)
    {
        is_power_of_two = 1; // 1 is considered a power of 2
    }
    else
    {
        while (num > 1)
        {
            if (num % 2 != 0)
            {
                is_power_of_two = 0; // Not a power of 2
                break;
            }
            num = num / 2;
        }
    }

    // Output the result
    if (is_power_of_two)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}