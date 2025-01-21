#include <stdio.h>

int main()
{
    unsigned int unsignedIntValue1 = 4294967295U;
    unsigned long int unsignedLongIntValue1 = 4294967295UL;
    unsigned long long int unsignedLongLongIntValue1 = 18446744073709551615ULL;
    unsigned short int unsignedShortIntValue1 = 65535;

    unsigned int unsignedIntValue2 = 0;
    unsigned long int unsignedLongIntValue2 = 0UL;
    unsigned long long int unsignedLongLongIntValue2 = 0ULL;
    unsigned short int unsignedShortIntValue2 = 0;

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
}

/*
In the lines 11 and 12:

unsigned long int unsignedLongIntValue2 = 0UL;
unsigned long long int unsignedLongLongIntValue2 = 0ULL;

the suffixes UL and ULL are used to explicitly indicate the type of the integer literals.

0UL specifies that the literal 0 is of type unsigned long int.
0ULL specifies that the literal 0 is of type unsigned long long int.
Using these suffixes ensures that the compiler treats the constants as the correct types, avoiding potential issues with type mismatches.

*/