#include <stdio.h>
#include <math.h>

float a, b, c, discriminant, root1, root2;

int main()
{
    // Get values of coefficients of the quadratic equation
    printf("Enter coefficient of x squared: ");
    scanf("%f", &a);
    printf("Enter coefficient of x: ");
    scanf("%f", &b);
    printf("Enter constant: ");
    scanf("%f", &c);

    // Calculate the discriminant
    discriminant = pow(b, 2) - (4 * a * c);

    // If roots are real calculate the roots using the formula [-b ± √(b² - 4ac)] / 2a
    if(discriminant >= 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoots are (%f, %f)\n", root1, root2);
    }
    else
    {
        printf("Roots are not real");
    }

    return 0;
}
