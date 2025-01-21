#include <stdio.h>
#include <math.h>

int main()
{
    double angle, sineValue, cosineValue, tangentValue;

    scanf("%lf", &angle);

    // Calculate sine, cosine, and tangent
    sineValue = sin(angle);
    cosineValue = cos(angle);
    tangentValue = tan(angle);

    printf("Sine = %.2lf\n", sineValue);
    printf("Cosine = %.2lf\n", cosineValue);
    printf("Tangent = %.2lf\n", tangentValue);
}
