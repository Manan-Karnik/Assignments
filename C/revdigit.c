#include <stdio.h>

int num, rem, rev = 0;

void main()
{
    printf("Enter a number: ");
    scanf("\n%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse of number is %d", rev);

}
