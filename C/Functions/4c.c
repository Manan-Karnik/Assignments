#include <stdio.h>

// Declare printPattern of void type
void printPattern(int n)
{
    // Declare static Variables
    static int a = 1, max;

    // Only in the first iteration of function set max to n
    if (a == 1)
    {
        max = n;
    }

    printf("\n");

    // Print pattern: * (1 to n times)
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    // Increment a
    a++;

    // Call printPattern till a reaches max
    if (a <= max)
    {
        printPattern(n + 1);
    }
}

// Main function
int main()
{
    // Declare Variables
    int num, result;

    // Get input from user
    printf("Enter number of lines: ");
    scanf("%d", &num);

    // Call printPattern with user input as argument
    printPattern(num);

    printf("\n");
    return 0;
}
