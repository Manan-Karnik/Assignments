#include <stdio.h>

int size, step, min, i, tmp, a[100];

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

    // Loop till second last element of array
    for (step = 0; step < size - 1; step++)
    {
        // Set min to step
        min = step;

        for (i = step + 1; i < size; i++)
        {
            // If any element is less than min set that as new min
            if (a[i] < a[min])
            {
                min = i;
            }
        }

        // Swap min with step
        tmp = a[step];
        a[step] = a[min];
        a[min] = tmp;
    }

    // Print sorted array
    printf("\nSorted Array in ascending order:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
