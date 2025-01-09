#include <stdio.h>

int main()
{
    int height_cm, meters, centimeters;

    // Input height in centimeters
    scanf("%d", &height_cm);

    // Calculate meters and remaining centimeters
    meters = height_cm / 100;
    centimeters = height_cm % 100;

    // Print the result
    printf("%d meter %d centimeter\n", meters, centimeters);

    return 0;
}