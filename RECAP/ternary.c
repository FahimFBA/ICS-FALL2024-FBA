#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    (n % 13 == 0) ? printf("Divisible by 13\n") 
    : printf("Not divisible by 13\n");
}