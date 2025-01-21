#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, result;

    scanf("%lf %lf", &a, &b);
    result = pow(a, b); // Calculate a^b
    printf("%.2lf\n", result);
}
