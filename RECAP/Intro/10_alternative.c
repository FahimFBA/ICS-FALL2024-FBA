// avoid this

#include <stdio.h>

int main()
{
    // Declare and initialize variables
    long int longInt = 2147483647;                   
    long long int longLongInt = 9223372036854775807; 
    long double longDouble = 1.1e+4932;              
    short int shortInt = 32767;                     

    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %.1Le\n", longDouble); // Use 'Le' for scientific notation
    printf("The short int value: %d\n", shortInt);

    // Reassign negative values and print again
    longInt = -2147483648;                  
    longLongInt = -9223372036854775807 - 1; 
    longDouble = 3.4e-4932;                
    shortInt = -32768;                     

    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %.1Le\n", longDouble);
    printf("The short int value: %d\n", shortInt);
}

/*
In the printf function, the format specifier %.1Le is used to print a long double value in scientific notation.
The L in Le indicates that the argument is of type "long double".

Using le would not correctly format a long double value and could lead to incorrect output or undefined behavior.

Here's a brief explanation of the format specifiers:

%e or %E: Scientific notation for float or double.
%Le or %LE: Scientific notation for long double.

printf("The long double value: %.1Le\n", longDouble); // Use 'Le' for scientific notation

As you already know from my classes, you need to use %e if the question wants lowercase e.
You need to use %E if the question wants uppercase E.







In the line 20:

longLongInt = -9223372036854775807 - 1;

the -1 is used to assign the minimum value that a long long int can hold.

The range of a signed long long int is from -9223372036854775808 to 9223372036854775807.

Since 9223372036854775808 cannot be directly represented as a positive number in a long long int (because it exceeds the maximum positive value), it is represented as -9223372036854775807 - 1.

This ensures that the variable longLongInt holds the minimum possible value for a long long int.
*/