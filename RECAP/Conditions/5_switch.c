#include <stdio.h>

int main()
{
    int num;
    int is_power_of_two = 1; // Assuming it's a power of 2 initially
    int remainder;

    // Read input from console
    printf("Enter a positive nonzero number: ");
    scanf("%d", &num);

    // Check if the number is positive and nonzero
    switch (num > 0)
    {
    case 0:
        printf("Invalid input. Please enter a positive nonzero number.\n");
        return 1;
    case 1:
        // Valid input, continue processing
        break;
    }

    // Check if the number is a power of 2
    switch (num)
    {
    case 1:
        is_power_of_two = 1;
        break;
    default:
        while (num > 1)
        {
            remainder = num % 2;
            switch (remainder)
            {
            case 0:
                num = num / 2;
                break;
            case 1:
                is_power_of_two = 0;
                num = 1; // Exit the loop
                break;
            }
        }
        break;
    }

    // Output the result
    switch (is_power_of_two)
    {
    case 1:
        printf("Yes\n");
        break;
    case 0:
        printf("No\n");
        break;
    }

    return 0;
}