#include <stdio.h>

int main()
{
    int height_inches, feet, inches;

    // Input height in inches
    scanf("%d", &height_inches);

    // Calculate feet and remaining inches
    feet = height_inches / 12;
    inches = height_inches % 12;

    // Print the result
    printf("%d feet %d inch\n", feet, inches);

    return 0;
}