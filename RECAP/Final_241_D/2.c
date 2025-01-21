#include <stdio.h>

int main()
{
    int choice;
    float distance, charge;

    // Display service options
    printf("Select the service:\n");
    printf("1. Car\n");
    printf("2. Bus\n");
    printf("3. Bike\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You selected Car.\n");
        printf("Enter the distance in kilometers: ");
        scanf("%f", &distance);
        charge = 500 * distance;
        printf("The total charge for your trip is: %.2f\n", charge);
        break;

    case 2:
        printf("You selected Bus.\n");
        printf("Enter the distance in kilometers: ");
        scanf("%f", &distance);
        charge = 300 * distance;
        printf("The total charge for your trip is: %.2f\n", charge);
        break;

    case 3:
        printf("You selected Bike.\n");
        printf("Enter the distance in kilometers: ");
        scanf("%f", &distance);
        charge = 100 * distance;
        printf("The total charge for your trip is: %.2f\n", charge);
        break;

    default:
        printf("Invalid service type selected.\n");
    }

    return 0;
}