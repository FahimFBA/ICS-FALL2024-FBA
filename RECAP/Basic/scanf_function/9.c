#include <stdio.h>

int main()
{
    int height_cm;
    int meters, centimeters;
    scanf("%d", &height_cm);

    // Calculate meters and remaining centimeters
    meters = height_cm / 100;
    centimeters = height_cm % 100;

    // Output in meter-centimeter format
    if (meters == 1)
    {
        printf("%d meter ", meters);
    }
    else
    {
        printf("%d meters ", meters);
    }

    if (centimeters == 1)
    {
        printf("%d centimeter\n", centimeters);
    }
    else
    {
        printf("%d centimeters\n", centimeters);
    }

    return 0;
}