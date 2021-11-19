#include <stdio.h>

int i, n, sum;

int main()
{
    // Using while loop
    n = 10, i = 1, sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum of first 10 natural numbers using while loop is %d\n", sum);

    // Using for loop
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\nSum of first 10 natural numbers using for loop is %d\n", sum);

    // Using do ... while loop
    i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    }
    while (i <= n);
    printf("\nSum of first 10 natural numbers using do ... while loop is %d\n", sum);

    return 0;
}
