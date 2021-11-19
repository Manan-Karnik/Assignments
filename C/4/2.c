#include <stdio.h>

int size, step, i, tmp, a[100], swapped = 0;

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
    for (step = 0; step < size; step++) {
        // Reset swapped to 0
        swapped = 0;

        // Loop through unsorted elements
        for (i = 0; i < (size - step - 1); i++)
        {
            // Swap elements if current element > next element
            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                swapped = 1;
            }
        }

        // If no swap occurred array is sorted
        if (swapped == 0)
        {
            break;
        }
    }

    // Print sorted array
    printf("\nSorted Array in ascending order:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
