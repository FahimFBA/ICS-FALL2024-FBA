#include <stdio.h>

int main()
{
    int choice, gb;
    float cost;

    // Display package options
    printf("Select the data package:\n");
    printf("1. Basic Package\n");
    printf("2. Standard Package\n");
    printf("3. Premium Package\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3)
    {
        // Ask for data usage
        printf("Enter the number of GBs you want to use: ");
        scanf("%d", &gb);

        // Calculate cost based on package type
        if (choice == 1)
        {
            cost = gb * 50;
            printf("You selected the Basic Package.\n");
        }
        else if (choice == 2)
        {
            cost = gb * 100;
            printf("You selected the Standard Package.\n");
        }
        else
        {
            cost = gb * 150;
            printf("You selected the Premium Package.\n");
        }

        // Print total cost
        printf("The total charge for your package is: %.2f\n", cost);
    }
    else
    {
        printf("Invalid package type selected.\n");
    }

    return 0;
}