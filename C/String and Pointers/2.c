#include <stdio.h>
#include <stdlib.h>

// Declare variables
char *a, *b, *c;
int l_a, l_b, i, j;

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
    printf("Enter length of second string: ");
    scanf("%d", &l_b);
    // Malloc b
    b = (char*)malloc(l_b * sizeof(char));
    // Get string from user and store in b
    printf("Enter second string: ");
    scanf("%s", b);

    // Malloc c
    c = (char*)malloc((l_a + l_b) * sizeof(char));

    // Loop through all characters in a and assign to c[i]
    for (i = 0; i < l_a; i++)
    {
        c[i] = a[i];
    }

    // Loop through all characters in b, assign to c[i] and increment i
    for (j = 0; j < l_b; j++)
    {
        c[i] = b[j];
        i++;
    }
    // Add null character at the end of c
    c[i] = '\0';

    // Print result
    printf("Concatenated string: %s\n", c);

    // Deallocate pointers
    free(a);
    free(b);
    return 0;
}
