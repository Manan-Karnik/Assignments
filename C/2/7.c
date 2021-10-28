#include <stdio.h>

int a, b;

int main()
{
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

	(a > b) ? printf("%d > %d", a, b)
			: printf("%d > %d", b, a);

	return 0;
}
