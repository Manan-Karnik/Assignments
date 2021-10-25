#include <stdio.h>

int num1, num2, temp;

int main()
{
    // Get input of 2 numbers from user
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Print values of variables before swapping
    printf("\nBefore swapping:\nFirst number is %d\nSecond number is %d\n", num1, num2);

    // Swap
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Print values of variables after swapping
    printf("\nAfter swapping:\nFirst number is %d\nSecond number is %d\n", num1, num2);

    return 0;
}
