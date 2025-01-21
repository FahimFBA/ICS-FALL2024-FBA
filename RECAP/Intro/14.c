#include <stdio.h>

// Global variable
int global_value = 10;

int main()
{
    // A. Print the value of the variable before defining the local variable
    printf("A. Global: %d\n", global_value);

    {
        // Define local variable with the same name
        int global_value = 20;

        // B. Print the value of the variable after defining the local variable
        printf("B. Local: %d\n", global_value);
    }

    /*
    The curly braces {} in lines 11 and 17 are used to create a new block scope within the main function.
    This allows you to define a local variable with the same name as a global variable without causing a conflict.
    */

    // C. Explicitly print the value of the variable as global
    printf("C. Global: %d\n", global_value);

    return 0;
}

/*

In this code:

The global variable global_value is defined at the top.
The first printf statement prints the value of the global variable.
The block scope {} starting at line 11 allows you to define a local variable global_value with the same name as the global variable.
Inside this block, the local global_value shadows the global global_value, so the second printf statement prints the value of the local variable.
After the block scope ends, the local global_value goes out of scope, and the global global_value is accessible again. The third printf statement prints the value of the global variable.
Using block scopes like this helps to manage variable scope and avoid naming conflicts.

*/