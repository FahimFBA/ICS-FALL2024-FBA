#include <stdio.h>
#include <limits.h>

int main()
{
    long int longIntValue1 = 2147483647;
    long long int longLongIntValue1 = 9223372036854775807LL;
    long double longDoubleValue1 = 1.1E+4932L;
    short int shortIntValue1 = 32767;

    long int longIntValue2 = -2147483648;
    long long int longLongIntValue2 = LLONG_MIN; // Using LLONG_MIN from limits.h
    long double longDoubleValue2 = 3.4E-4932L;
    short int shortIntValue2 = -32768;

    // Print the first set of values
    printf("The long int value: %ld\n", longIntValue1);
    printf("The long long int value: %lld\n", longLongIntValue1);
    printf("The long double value: %.1LE\n", longDoubleValue1);
    printf("The short int value: %d\n", shortIntValue1);

    // Print the second set of values
    printf("The long int value: %ld\n", longIntValue2);
    printf("The long long int value: %lld\n", longLongIntValue2);
    printf("The long double value: %.1LE\n", longDoubleValue2);
    printf("The short int value: %d\n", shortIntValue2);

    return 0;
}

/*
In the line 12:

long long int longLongIntValue2 = LLONG_MIN; // Using LLONG_MIN from limits.h

LLONG_MIN is a macro defined in the <limits.h> header file that represents the minimum value that a long long int can hold.

Using LLONG_MIN ensures that the code is more readable and portable, as it directly uses the predefined constant for the minimum value of a long long int, rather than hardcoding the value -9223372036854775808.

This makes the code clearer and less error-prone, as it relies on the standard library to provide the correct value for the minimum long long int.





The LL suffix in the line 7:

long long int longLongIntValue1 = 9223372036854775807LL;

is used to explicitly indicate that the literal 9223372036854775807 is of type long long int. This ensures that the compiler treats the constant as a long long int rather than a regular int or long int.

Using the LL suffix helps avoid potential issues with type mismatches and ensures that the value is correctly interpreted as a long long int.



*/