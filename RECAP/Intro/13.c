#include <stdio.h>

#define HEIGHT 200
#define PI 3.14

// You can't change the value of a defined constant. 

// You can't use defined constants in main function.

int main()
{
    printf("The value of HEIGHT: %d\n", HEIGHT);
    printf("The value of PI: %.2f\n", PI);
}

/*
In C, you cannot use the #define preprocessor directive inside a function.

The #define directive is used to define macros and must be placed outside of any function, typically at the top of the file.

However, you can declare const variables inside a function. Here's an example:

#include <stdio.h>

int main()
{
    // Define constants using const keyword
    const unsigned int unsignedIntValue1 = 4294967295U;
    const unsigned long int unsignedLongIntValue1 = 4294967295UL;
    const unsigned long long int unsignedLongLongIntValue1 = 18446744073709551615ULL;
    const unsigned short int unsignedShortIntValue1 = 65535;

    const unsigned int unsignedIntValue2 = 0;
    const unsigned long int unsignedLongIntValue2 = 0UL;
    const unsigned long long int unsignedLongLongIntValue2 = 0ULL;
    const unsigned short int unsignedShortIntValue2 = 0;

    // Print the first set of values
    printf("The unsigned int value: %u\n", unsignedIntValue1);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue1);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue1);
    printf("The unsigned short int value: %hu\n", unsignedShortIntValue1);

    // Print the second set of values
    printf("The unsigned int value: %u\n", unsignedIntValue2);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue2);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue2);
    printf("The unsigned short int value: %hu\n", unsignedShortIntValue2);

    return 0;
}

In this example, const is used to declare constants within the main function.

*/