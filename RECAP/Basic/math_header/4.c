#include <stdio.h>
#include <math.h>

int main()
{
    double u, a, s, v;
    scanf("%lf %lf %lf", &u, &a, &s);
    // Calculate v
    v = sqrt(u * u + 2 * a * s);
    printf("v = %.2lf\n", v);
}
