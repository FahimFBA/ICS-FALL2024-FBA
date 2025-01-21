#include <stdio.h>

int main()
{
    float theta;

    scanf("%f", &theta);

    // Check if the input is valid
    if (theta < 0 || theta >= 360)
    {
        printf("Invalid input. Angle must be between 0 and 360 degrees.\n");
        return 1;
    }

    // Determine the quadrant
    if (theta == 0 || theta == 90 || theta == 180 || theta == 270)
    {
        printf("On axis\n");
    }
    else if (theta < 90)
    {
        printf("First Quadrant\n");
    }
    else if (theta < 180)
    {
        printf("Second Quadrant\n");
    }
    else if (theta < 270)
    {
        printf("Third Quadrant\n");
    }
    else
    {
        printf("Fourth Quadrant\n");
    }

    return 0;
}