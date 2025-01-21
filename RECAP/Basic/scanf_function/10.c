#include <stdio.h>

int main()
{
    int height_inches;
    int feet, inches;
    scanf("%d", &height_inches);

    // Calculate feet and remaining inches
    feet = height_inches / 12;
    inches = height_inches % 12;

    // Output in feet-inch format
    printf("%d feet ", feet);

    if (inches == 1)
    {
        printf("%d inch\n", inches);
    }
    else
    {
        printf("%d inches\n", inches);
    }
}