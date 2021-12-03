#include <stdio.h>
#define MAX 100

// Declare add2DArray function of void type
void add2DArray(int r, int c, int a_[MAX][MAX], int b_[MAX][MAX], int add_[MAX][MAX])
{
    // Add elements using nested loop and store in add_
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            add_[i][j] = a_[i][j] + b_[i][j];
        }
    }
}

int main()
{
    // Declare variables
    int a[MAX][MAX], b[MAX][MAX], add[MAX][MAX], rows, cols, i, j;

    // Get dimensions from user
    printf("Enter dimensions of 2D arrays: ");
    scanf("%d%d", &rows, &cols);

    // Get elements of first array
    printf("\nEnter the elements of first array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Get elements of second array
    printf("\nEnter the elements of second array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Add the arrays
    add2DArray(rows, cols, a, b, add);

    // Print result array
    printf("\nAddition of arrays:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    return 0;
}
