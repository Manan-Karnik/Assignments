#include <stdio.h>

int i, num, rev, rem;

int main()
{
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    i = num;

    // Calculate reverse
    while (i > 0)
    {
        rem = i % 10;
        rev = rev * 10 + rem;
        i = i / 10;
    }

    // Print result
    printf("Reverse of %d is %d", num, rev);

    return 0;
}
