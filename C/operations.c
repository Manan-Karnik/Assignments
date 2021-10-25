#include <stdio.h>

float a, b, add, sub, mult, rem;

int main()
{
    // Get input of two numbers from user
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    // Perform the calculations
    add = a + b;
    sub = a - b;
    mult = a * b;
    rem = a % b;

    // Print the result
    printf("\nAddition: %f\nSubtraction: %f\nMultiplication: %f\nRemainder: %f\n", add, sub, mult, rem);

    return 0;
}
