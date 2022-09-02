#include <stdio.h>

int main()
{
    //
    // Declare Variables Section --------
    //
    //
    //
    // Integers
    int intVar;           // %d, %i
    unsigned int uIntVar; // %u

    // Short Integers
    short int sIntVar;           // %hd, %hi
    unsigned short int usIntVar; // %hu

    // Long Integers
    long int longIntVar;                    // %ld, %li
    unsigned long int uLongIntVar;          // %lu
    long long int longLongIntVar;           // %lld, %lli
    unsigned long long int uLongLongIntVar; // %llu

    // Characters
    char charVar;           // %c
    signed char sCharVar;   // %c
    unsigned char uCharVar; // %c

    // Floats
    float floatVar;            // %f
    double doubleVar;          // %lf
    long double longDoubleVar; // %Lf

    //
    // Input Section ---------
    //
    //
    //
    // Integers

    printf("Enter an signed integer value: ");
    scanf("%d", &intVar);

    printf("Enter an unsigned integer value: ");
    scanf("%u", &uIntVar);

    printf("Enter a signed short value: ");
    scanf("%hd", &sIntVar);

    printf("Enter an unsigned short value: ");
    scanf("%hu", &usIntVar);

    printf("Enter a signed long value: ");
    scanf("%ld", &longIntVar);

    printf("Enter an unsigned long value: ");
    scanf("%lu", &uLongIntVar);

    printf("Enter a signed long long value: ");
    scanf("%lld", &longLongIntVar);

    printf("Enter an unsigned long long value: ");
    scanf("%llu", &uLongLongIntVar);

    // Characters
    /*
        To get input on char type, one can use getchar() instead of scanf()

        But After Char or String Input, Some buffer will behave unexpected in the next input if the Enter/Return Key is not captured.

    */

    printf("Enter a character: ");
    getchar(); // <-- Dummy getchar() to Capture Enter
    scanf("%c",&charVar);
    getchar(); // <-- Dummy getchar() to Capture Enter

    printf("Enter a signed character: ");
    scanf("%c",&sCharVar);
    getchar(); // <-- Dummy getchar() to Capture Enter

    printf("Enter an unsigned character: ");
    uCharVar = getchar(); // <-- getchar() to input
    getchar();

    // Floats

    printf("Enter a float value: ");
    scanf("%f", &floatVar);

    printf("Enter a double value: ");
    scanf("%lf", &doubleVar);

    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleVar);

    //
    // Output Section ------------
    //
    //
    //
    printf("\nYou entered character: '%c' \n", charVar);
    printf("You entered signed character: '%c' \n\n", sCharVar);
    printf("You entered unsigned character: '%c' \n\n", uCharVar);

    printf("You entered signed short: %hd \n", sIntVar);
    printf("You entered unsigned short: %hu \n\n", usIntVar);

    printf("You entered signed int: %d \n", intVar);
    printf("You entered unsigned int: %lu \n\n", uIntVar);

    printf("You entered signed long: %ld \n", longIntVar);
    printf("You entered unsigned long: %lu \n\n", uLongIntVar);

    printf("You entered signed long long: %lld \n", longLongIntVar);
    printf("You entered unsigned long long: %llu \n\n", uLongLongIntVar);

    printf("You entered float: %f \n", floatVar);
    printf("You entered double: %lf \n", doubleVar);
    printf("You entered long double: %Lf \n", longDoubleVar);
    return 0;
}