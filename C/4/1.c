#include <stdio.h>

int n, i, a[100], b[100], sum[100];

int main()
{
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("\nEnter elements of first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    printf("\nEnter elements of second array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\nThe sum of the two arrays is:\n");
    for (i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i];
        printf("%d ", sum[i]);
    }

    return 0;
}
