#include <stdio.h>

int a[10][10], b[10][10], mul[10][10], arows, acols, brows, bcols, i, j, k;

int main()
{
    // Get input of matrix a
    printf("Enter the number of rows and cols for first matrix: ");
    scanf("%d%d", &arows, &acols);
    printf("Enter the first matrix:\n");
    for(i = 0; i < arows; i++)
    {
        for(j = 0; j < acols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Get input of matrix b
    printf("\nEnter the number of rows and cols for second matrix: ");
    scanf("%d%d", &brows, &bcols);
    printf("Enter the second matrix:\n");
    for(i = 0; i < brows; i++)
    {
        for(j = 0; j < bcols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // If row of b and col of a are not equal multiplication is not possible
    if (brows != acols)
    {
        printf("\nMultiplication not possible");
    }
    else
    {
        // Calculate and print multiplication matrix
        printf("\nMultiplication of the matrices:\n");
        for(i = 0; i < arows; i++)
        {
            for(j = 0; j < bcols; j++)
            {
                mul[i][j] = 0;
                for(k=0; k < brows; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                    printf("%d\n", mul[i][j]);
                }
                //printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
