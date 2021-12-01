#include <stdio.h>
#include <stdlib.h>

// Declare variables
char *a, *b;
int l_a, l_b, i, same = 1;

int main()
{
    // Get length of first string from user
    printf("Enter length of first string: ");
    scanf("%d", &l_a);
    // Malloc a
    a = (char*)malloc(l_a * sizeof(char));
    // Get string from user and store in a
    printf("Enter first string: ");
    scanf("%s", a);

    // Get length of second string from user
    printf("Enter length of first string: ");
    scanf("%d", &l_b);
    // Malloc b
    b = (char*)malloc(l_b * sizeof(char));
    // Get string from user and store in b
    printf("Enter second string: ");
    scanf("%s", b);

    // If string lengths are not equal, strings are not same
    if (l_a != l_b)
    {
        same = 0;
    }
    else
    {
        // Loop through characters and check if they are same
        for (i = 0; i < l_a; i++)
        {
            if (b[i] != a[i])
            {
                same = 0;
            }
        }
    }

    // Print result
    if (same == 1)
    {
        printf("Strings are same\n");
    }
    else
    {
        printf("Strings are not same\n");
    }

    // Deallocate pointers
    free(a);
    free(b);
    return 0;
}
