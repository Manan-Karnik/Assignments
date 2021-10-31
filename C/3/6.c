#include <stdio.h>

int i, n, first, second, next;

int main()
{
    // Initialize n and first 2 terms
    n = 10, first = 0, second = 1;

    // Print first 2 terms
    printf("First %d terms: %d %d ", n, first, second);

    // Calculate and print 3rd to nth term
    for (i = 3; i <= n; i++)
    {
        next = first + second;
        printf("%d ", next);

        first = second;
        second = next;
    }

    return 0;
}
