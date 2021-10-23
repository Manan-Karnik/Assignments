#include <stdio.h>
#include <math.h>

float a, b, c, determinant, root1, root2;

void main()
{
    printf("Enter coefficient of x squared: ");
    scanf("%f", &a);
    printf("Enter coefficient of x: ");
    scanf("%f", &b);
    printf("Enter constant: ");
    scanf("%f", &c);

    determinant = pow(b, 2) - (4 * a * c);

    if(determinant >= 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Roots are (%f, %f)\n", root1, root2);
    }
    else
    {
        printf("Roots are not real");
    }

}
