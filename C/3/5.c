#include <stdio.h>

int i, j, n, fact, sum;

int main()
{
    n = 5, sum = 0;

    // Calculate sum of factorials
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += fact;
    }

    // Print result
    printf("Sum of factorial of the first %d numbers is %d\n", n, sum);

    return 0;
}
