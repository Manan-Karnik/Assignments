#include <stdio.h>
#include <stdlib.h>

// Declare variables
char *a, *b;
int len, i;

int main()
{
    // Get string length from user
    printf("Enter length of string: ");
    scanf("%d", &len);

    // Malloc a and b
    a = (char*)malloc(len * sizeof(char));
    b = (char*)malloc(len * sizeof(char));

    // Get string from user and store in a
    printf("Enter string: ");
    scanf("%s", a);

    // Loop through all the characters and assign to b[i]
    for (i = 0; i < len; i++)
    {
        b[i] = a[i];
    }
    // Add null character at the end of b
    b[i] = '\0';

    // Print result
    printf("Input string: %s\n", a);
    printf("Copied string: %s\n", b);

    // Deallocate pointers
    free(a);
    free(b);
    return 0;
}
