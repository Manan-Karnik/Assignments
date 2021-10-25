#include <stdio.h>

int a, b, output;


int main()
{
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

	printf("a = %d, b = %d\n", a, b);

    // Bitwise AND
    output = a & b;
	printf("a&b = %d\n", output);

    // Bitwise OR
    output = a | b;
	printf("a|b = %d\n", output);

    // Bitwise XOR
    output = a ^ b;
	printf("a^b = %d\n", output);

    // Bitwise NOT
    output = ~a;
	printf("~a = %d\n", output);

    // Left shift
    output = b << 1;
	printf("b<<1 = %d\n", output);

    // Right shift
    output = b >> 1;
	printf("b>>1 = %d\n", output);

	return 0;
}
