#include <stdio.h>

int main()
{
    int n, i;
    float num, sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;
    printf("The average of the %d numbers is: %.2f\n", n, average);

    return 0;
}