#include <stdio.h>

int main()
{
    float u, a, t, s;

    scanf("%f %f %f", &u, &a, &t);

    s = u * t + 0.5 * a * t * t;

    printf("s = %.0f\n", s);

    return 0;
}