#include <stdio.h>
#define MAX 100

// Declare addArray function of void type
void addArray(int len_, int a_[MAX], int b_[MAX], int *add_)
{
    for (int i = 0; i < len_; i++)
    {
        add_[i] = a_[i] + b_[i];
    }
}

int main()
{
    // Declare variables
    int a[MAX], b[MAX], add[MAX], len, i, j;

    // Get length from user
    printf("Enter length of arrays: ");
    scanf("%d", &len);

    // Get elements of first array
    printf("\nEnter the elements of first array:\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    // Get elements of second array
    printf("\nEnter the elements of second array:\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &b[i]);
    }

    // Add the arrays
    addArray(len, a, b, add);

    // Print result array
    printf("\nAddition of arrays:\n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", add[i]);
    }

    return 0;
}
