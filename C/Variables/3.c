#include <stdio.h>

// Declare variable
extern int extern_var = 10;

int main()
{
    printf("Extern int extern_var: %d", extern_var);
    return 0;
}
