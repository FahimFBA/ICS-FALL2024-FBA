#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    double x, y, h, k, r;
    double area, circumference;

    // Input x,y coordinates of a point on the circle
    printf("Enter x,y coordinates of a point on Circle: ");
    scanf("%lf %lf", &x, &y);

    // Input h,k coordinates of the center of the circle
    printf("Enter center coordinates of the Circle: ");
    scanf("%lf %lf", &h, &k);

    // Calculate the radius using the equation (x-h)^2 + (y-k)^2 = r^2
    r = sqrt(pow(x - h, 2) + pow(y - k, 2));

    // Calculate area and circumference
    area = PI * pow(r, 2);
    circumference = 2 * PI * r;

    // Output the results
    printf("Area = %.3f\n", area);
    printf("Circumference = %.3f\n", circumference);

    return 0;
}