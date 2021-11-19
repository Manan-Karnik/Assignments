#include <stdio.h>

int i, num, fact;

int main()
{
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }

    // Print result
    printf("\nFactorial of the number is %d\n", fact);

    return 0;
}
