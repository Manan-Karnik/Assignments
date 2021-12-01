#include <stdio.h>
#include <stdlib.h>

// Declare variables
char *a;
int len, i, count = 0;

int main()
{
    // Get length of first string from user
    printf("Enter length of string: ");
    scanf("%d", &len);
    // Malloc a
    a = (char*)malloc(len * sizeof(char));
    // Get string from user and store in a
    printf("Enter string: ");
    scanf("%s", a);

    // Loop through all characters in a
    for (i = 0; i < len; i++)
    {
        // If character is 'a', increment count
        if (a[i] == "a")
        {
            count++;
        }
    }

    // Print result
    printf("'a' occurs %d times in %s\n", count, a);

    // Deallocate pointer
    free(a);
    return 0;
}
