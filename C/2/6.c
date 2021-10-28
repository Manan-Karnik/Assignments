#include <stdio.h>

int a, b;
char operator, cont;

int main()
{
    cont = 'y';
    do
    {
        printf("Enter 2 numbers: ");
        scanf("%d%d", &a, &b);
        printf("Enter operator(+, -, *, / or %%): ");
        scanf(" %c", &operator);

        switch (operator)
        {
            case '+':
            printf("%d %c %d = %d\n", a, operator, b, a + b);
            break;

            case '-':
            printf("%d %c %d = %d\n", a, operator, b, a - b);
            break;

            case '*':
            printf("%d %c %d = %d\n", a, operator, b, a * b);
            break;

            case '/':
            printf("%d %c %d = %d\n", a, operator, b, a / b);
            break;

            case '%':
            printf("%d %c %d = %d\n", a, operator, b, a % b);
            break;

            default:
            printf("Invalid operator\n");
        }

        printf("\nDo you want to continue (Y/N): ");
        scanf(" %c", &cont);
        printf("\n");
    }
    while (cont == 'Y' || cont == 'y');

    return 0;
}
