#include <stdio.h>

int main()
{
    float u, a, t, v;

    scanf("%f %f %f", &u, &a, &t);

    // Calculate terminal velocity
    v = u + a * t;

    printf("v = %.0f\n", v);

    return 0;
}