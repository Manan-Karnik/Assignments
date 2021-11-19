#include <stdio.h>

int size, step, i, j, key, a[100];

int main()
{
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("\nEnter elements of array:\n");

    // Store input in array
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // Loop through all elements of array
    for (step = 1; step < size; step++)
    {
        key = a[step];
        j = step - 1;

        // Compare key with each element on the left of it until
        // an element smaller than it is found
        while (key < a[j] && j >= 0) {
            a[j + 1] = a[j];
            --j;
        }

        a[j + 1] = key;
    }

    // Print sorted array
    printf("\nSorted Array in ascending order:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
