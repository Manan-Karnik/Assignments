#include <stdio.h>
#include <stdlib.h>

// Declare Variables
int len, *a, *b;

// Main function
int main()
{
    // Get length of arrays from user
    printf("Enter length of arrays: ");
    scanf("%d", &len);

    // Malloc and store first array
    a = (int*) malloc(len * sizeof(int));
    printf("Enter elements of first array: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    // Malloc and store second array
    b = (int*) malloc(len * sizeof(int));
    printf("Enter elements of second array: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &b[i]);
    }

    // Print sum of array elements as resultant array
    printf("Resultant array:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", a[i] + b[i]);
    }

    return 0;
}
