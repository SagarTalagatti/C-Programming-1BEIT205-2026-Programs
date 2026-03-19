/*******************************************************
    Documentation Section
    Program Name : Simple Calculator Demo
    Author       : Sagar Talagatti
    Date         : 18-03-2026
    Description  :
        This program demonstrates the basic structure
        of a C program including documentation section,
        link section, definition section, global
        declaration section, main function, and
        user-defined functions.

        The program adds two numbers using a user-
        defined function.
********************************************************/


/* Link Section (#include section) */
#include <stdio.h>


/* Definition Section */
#define PROGRAM_NAME "Structure of C Program Demo"


/* Global Declaration Section */
int a = 10;
int b = 20;

/* Function prototype */
int add(int, int);



/* main() Function Section */
int main()
{
    /* Declaration Part */
    int result;

    /* Executable Part */
    result = add(a, b);

    printf("Program: %s\n", PROGRAM_NAME);
    printf("First number  = %d\n", a);
    printf("Second number = %d\n", b);
    printf("Sum = %d\n", result);

    return 0;
}


/* Subprogram Section (User-defined functions) */

int add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}
