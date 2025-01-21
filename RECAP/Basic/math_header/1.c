#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    int floorValue, ceilingValue;
    scanf("%f", &num);

    floorValue = floor(num); // Calculate floor
    ceilingValue = ceil(num); // Calculate ceiling

    printf("Floor = %d\n", floorValue);
    printf("Ceiling = %d\n", ceilingValue);
}
