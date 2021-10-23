#include <stdio.h>

int num1, num2, temp;

void main()
{
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\nFirst number is %d\nSecond number is %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\nFirst number is %d\nSecond number is %d\n", num1, num2);
}
