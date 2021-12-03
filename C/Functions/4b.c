#include <stdio.h>


// Declare printPattern of void type
void printPattern(int n)
{
    if (n >= 1)
    {
        printf("\n");

        // Print pattern: * (n times)
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        // Call printPattern till (n - 1) reaches 1
        printPattern(n - 1);
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
