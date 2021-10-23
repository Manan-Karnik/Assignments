#include <stdio.h>

int marks[5], i;

void main()
{
    for(i = 1; i < 4; i++)
    {
        scanf("%d\n", &marks[i]);

    }

    for(i = 1; i < 5; i++)
    {
        printf("%d\t", marks[i]);

    }
}
