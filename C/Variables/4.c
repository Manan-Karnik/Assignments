#include <stdio.h>

// Declare global variable
int p = 10;

void func()
{
    // Declare local variable
    int q = 50;
    // Print variables
    printf("Global int p: %d, Local int q: %d\n", p, q);

}

int main()
{
    // Declare local variable
    int r = 20;
    // Print variables
    printf("Global int p: %d, Local int r: %d\n", p, r);
    func();

    printf("Extern variable through seperate file: %d\n", extern_var);
    return 0;
}
