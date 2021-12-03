#include <stdio.h>

// Declare function fact of int type
long int fact(int n)
{
    // If n reaches 0, return 1
    if (n == 0)
    {
        return 1;
    }
    // If n is negative, return 0
    else if (n < 0)
    {
        return -1;
    }
    // Return n times factorial of n - 1 till (n - 1) reaches 0
    return n * fact(n - 1);
}

// Main function
int main()
{
    // Declare Variables
    int num;
    long int result;

    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store return value of fact in result
    result = fact(num);

    // If return value is -1, input was negative
    if (result == -1)
    {
        printf("\nFactorial of %d is not possible\n", num);
    }
    else
    {
        printf("\n%d factorial is %d\n", num, result);
    }

    return 0;
}
