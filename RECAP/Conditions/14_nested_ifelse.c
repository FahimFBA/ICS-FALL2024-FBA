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

    if (choice == 1)
    {
        printf("Addition: %.2f\n", a + b);
    }
    else
    {
        if (choice == 2)
        {
            printf("Subtraction: %.2f\n", a - b);
        }
        else
        {
            if (choice == 3)
            {
                printf("Multiplication: %.2f\n", a * b);
            }
            else
            {
                if (choice == 4)
                {
                    if (b != 0)
                    {
                        int case_choice;
                        printf("Enter case (1-2):\n1. Quotient\n2. Remainder\n");
                        scanf("%d", &case_choice);
                        if (case_choice == 1)
                        {
                            printf("Quotient: %.2f\n", a / b);
                        }
                        else
                        {
                            if (case_choice == 2)
                            {
                                printf("Remainder: %.2f\n", (float)((int)a % (int)b));
                            }
                            else
                            {
                                printf("Invalid case choice\n");
                            }
                        }
                    }
                    else
                    {
                        printf("Error: Divisor is zero\n");
                    }
                }
                else
                {
                    printf("Invalid choice\n");
                }
            }
        }
    }

    return 0;
}