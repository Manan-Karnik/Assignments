#include <stdio.h>

int a;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("\n%d is an even number\n", a);
    }
    else
    {
        printf("\n%d is an odd number\n", a);
    }

    return 0;
}
