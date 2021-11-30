#include <stdio.h>
#include <stdlib.h>

// Declare Variables
int len, *a, *bubble_sorted_a, *selection_sorted_a;

// Declare function bubbleSort of return type int *
int *bubbleSort(int a_[])
{
    // Declare variables
    int step, swapped, i, tmp;
    // Repeat bubble sort for all elements
    for (step = 0; step < len; step++)
    {
        // Reset swapped to 0
        swapped = 0;
        // Loop through unsorted elements
        for (i = 0; i < (len - step - 1); i++)
        {
            // Swap elements if current element > next element
            if (a_[i] > a_[i + 1])
            {
                tmp = a_[i];
                a_[i] = a_[i + 1];
                a_[i + 1] = tmp;
                swapped = 1;
            }
        }
        // If no swap occurred array is sorted
        if (swapped == 0)
        {
            break;
        }
    }

    return a_;
}

// Declare function selectionSort of return type int *
int *selectionSort(int a_[])
{
    // Declare variables
    int step, min, i, tmp;
    // Loop till second last element of array
    for (step = 0; step < len - 1; step++)
    {
        // Set min to step
        min = step;
        // Loop from step + 1 till end of array
        for (i = step + 1; i < len; i++)
        {
            // If any element is less than min, set that as new min
            if (a_[i] < a_[min])
            {
                min = i;
            }
        }
        // Swap min with step
        tmp = a_[step];
        a_[step] = a_[min];
        a_[min] = tmp;
    }

    return a_;
}

// Main function
int main()
{
    // Get array length from user
    printf("Enter length of array: ");
    scanf("%d", &len);

    // Malloc pointer variable based on array length
    a = (int*) malloc(len * sizeof(int));
    // Get elements of array from user
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    // Call bubble sort and store return value in bubble_sorted_a
    bubble_sorted_a = bubbleSort(a);
    // Print bubble sorted array
    printf("\nBubble sorted array:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", bubble_sorted_a[i]);
    }
    // Call bubble sort and store return value in selection_sorted_a
    selection_sorted_a = selectionSort(a);
    // Print selection sorted array
    printf("\n\nSelection sorted array:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", selection_sorted_a[i]);
    }

    return 0;
}
