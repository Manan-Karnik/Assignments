#include <stdio.h>

int a[10][10], b[10][10], sum[10][10], rows, cols, i, j;

int main()
{

    printf("Enter the number of rows and cols for matrices: ");
    scanf("%d%d", &rows, &cols);

    // Get input of matrix a
    printf("Enter the first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Get input of matrix b
    printf("Enter the second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate and print sum matrix
    printf("\nAddition of matrices:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
