#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, result;
    scanf("%lf %lf", &x, &y);

    if (x < 0 && y < 0)
    {
        result = pow(x, 3) + 5 * x * y;
        printf("%.3f\n", result);
    }
    else if (x < 0 && y > 0)
    {
        result = 4 * y;
        printf("%.3f\n", result);
    }
    else if (x >= 0)
    {
        result = 1 / (x + y);
        printf("%.3f\n", result);
    }
    else
    {
        printf("Undefined\n");
    }

    return 0;
}