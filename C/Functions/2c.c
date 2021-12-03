#include <stdio.h>
#define MAX 100

int *bubbleSort(int a_[MAX], int len_)
{
    // Declare variables
    int step, swapped, i, tmp;
    // Repeat bubble sort for all elements
    for (step = 0; step < len_; step++)
    {
        // Reset swapped to 0
        swapped = 0;
        // Loop through unsorted elements
        for (i = 0; i < (len_ - step - 1); i++)
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

int *selectionSort(int a_[MAX], int len_)
{
    int step, min, i, tmp;
    // Loop till second last element of array
    for (step = 0; step < len_ - 1; step++)
    {
        // Set min to step
        min = step;

        for (i = step + 1; i < len_; i++)
        {
            // If any element is less than min set that as new min
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

void printArray(char a_name[], int a_[MAX], int len_)
{
    // Loop through array and print
    printf("\n");
    printf("%s array:\n", a_name);
    for (int i = 0; i < len_; i++)
    {
        printf("%d\t", a_[i]);
    }
    printf("\n");
}

int main()
{
    // Declare variables
    int a[MAX], *bubbleSorted_a, *selectionSorted_a, len, i;
    // Get length from user
    printf("Enter length of array: ");
    scanf("%d", &len);

    // Get elements of first array
    printf("\nEnter the elements of array:\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    // Print array, call sort functions and print sorted arrays
    printArray("Input", a, len);
    bubbleSorted_a = bubbleSort(a, len);
    selectionSorted_a = selectionSort(a, len);
    printArray("Bubble sorted", bubbleSorted_a, len);
    printArray("Selection sorted", selectionSorted_a, len);

    return 0;
}
