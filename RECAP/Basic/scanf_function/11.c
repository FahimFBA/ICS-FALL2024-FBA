#include <stdio.h>

int main()
{
    int total_seconds;
    int hours, minutes, seconds;
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Output in hour-minute-second format
    printf("%d hour ", hours);
    printf("%d minute ", minutes);
    printf("%d second\n", seconds);
}