#include <stdio.h>

int main()
{
    float garden_width, garden_length, road_width;

    printf("Enter the width of the garden: ");
    scanf("%f", &garden_width);
    printf("Enter the length of the garden: ");
    scanf("%f", &garden_length);
    printf("Enter the width of the road surrounding the garden: ");
    scanf("%f", &road_width);

    float garden_area = garden_width * garden_length;
    float total_area = (garden_width + 2 * road_width) * (garden_length + 2 * road_width);
    float road_area = total_area - garden_area;

    printf("The area of the garden is: %.2f square meters\n", garden_area);
    printf("The total area covered by the garden and the surrounding road is: %.2f square meters\n", total_area);

    // a) Calculate the area of the path surrounding the garden
    printf("The area of the path surrounding the garden is: %.2f square meters\n", road_area);

    // b) Calculate the perimeter of the garden
    float garden_perimeter = 2 * (garden_width + garden_length);
    printf("The perimeter of the garden is: %.2f meters\n", garden_perimeter);

    // c) Calculate the total cost of paving the road
    float cost_per_sqm;
    printf("Enter the cost per square meter of paving: ");
    scanf("%f", &cost_per_sqm);
    float total_cost = road_area * cost_per_sqm;
    printf("The total cost of paving the road is: %.2f\n", total_cost);

    // d) Calculate the volume of the box
    float box_width, box_length, box_height;
    printf("Enter the width, length, and height of the box: ");
    scanf("%f %f %f", &box_width, &box_length, &box_height);
    float box_volume = box_width * box_length * box_height;
    printf("The volume of the box is: %.2f cubic meters\n", box_volume);

    return 0;
}