#include <stdio.h>

int num;

void main()
{
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
         printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }
}
