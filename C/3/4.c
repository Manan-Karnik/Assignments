#include <stdio.h>

int i, num, factors = 0;

int main()
{
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the number of factors
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            factors++;
        }
    }

    // Print whether the number is prime or composite
    if (factors > 2)
    {
        printf("\n%d is composite\n", num);
    }
    else if (factors == 2)
    {
        printf("\n%d is prime\n", num);
    }
    else
    {
        printf("\n%d is neither prime nor composite\n", num);
    }

    return 0;
}
