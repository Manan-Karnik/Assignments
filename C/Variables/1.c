#include <stdio.h>

int func(int *a_, int *b_)
{
    // Declare variables
    static int x = 0;
    int y = 0;

    // Increment x and y
    x++;
    y++;

    // Point to x and y
    *a_ = x;
    *b_ = y;
}

int main()
{
    // Declare variables
    int a, b;

    // Call function and print values
    printf("Function Called\n");
    func(&a, &b);
    printf("Static int x: %d, int y: %d\n\n", a, b);

    // Call function and print values again
    printf("Function Called\n");
    func(&a, &b);
    printf("Static int x: %d, int y: %d\n", a, b);

    return 0;
}
