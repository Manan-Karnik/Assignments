#include <stdio.h>

int num;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("%d is positive", num);
    }
    else if(num == 0)
    {
        printf("%d is neither positive nor negative", num);
    }
    else
    {
        printf("%d is negative", num);
    }

    return 0;
}
