#include <stdio.h>

int size, i, j, k, a[100];

void mergeSort(int a[], int low, int high) {
    if (low < high) {

        // mid is the point where the array is divided into two subarrays
        int mid = low + (high - low) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        // Create L ← A[low..mid] and M ← A[mid+1..high]
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int L[n1], M[n2];

        for (i = 0; i < n1; i++)
        {
            L[i] = a[low + i];
        }
        for (j = 0; j < n2; j++)
        {
            M[j] = a[mid + 1 + j];
        }

        // Maintain current index of sub-arrays and main array
        i = 0;
        j = 0;
        k = low;

        // Until we reach either end of either L or M, pick larger among
        // elements L and M and place them in the correct position at A[low..high]
        while (i < n1 && j < n2) {
            if (L[i] <= M[j]) {
                a[k] = L[i];
                i++;
            } else {
                a[k] = M[j];
                j++;
            }
            k++;
        }

        // When we run out of elements in either L or M,
        // pick up the remaining elements and put in A[low..high]
        while (i < n1) {
            a[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            a[k] = M[j];
            j++;
            k++;
        }
    }
}

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

    mergeSort(a, 0, size - 1);

    // Print sorted array
    printf("\nSorted Array in ascending order:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
