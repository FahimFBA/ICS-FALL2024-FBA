#include <stdio.h>

int main()
{
    float a, b;
    int choice;

    printf("Enter two real numbers (a b): ");
    scanf("%f %f", &a, &b);

    printf("Enter choice (1-4):\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition: %.2f\n", a + b);
        break;
    case 2:
        printf("Subtraction: %.2f\n", a - b);
        break;
    case 3:
        printf("Multiplication: %.2f\n", a * b);
        break;
    case 4:
        switch (b != 0)
        {
        case 1:
        {
            int case_choice;
            printf("Enter case (1-2):\n1. Quotient\n2. Remainder\n");
            scanf("%d", &case_choice);
            switch (case_choice)
            {
            case 1:
                printf("Quotient: %.2f\n", a / b);
                break;
            case 2:
                printf("Remainder: %.2f\n", (float)((int)a % (int)b));
                break;
            default:
                printf("Invalid case choice\n");
            }
        }
        break;
        case 0:
            printf("Error: Divisor is zero\n");
            break;
        }
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}