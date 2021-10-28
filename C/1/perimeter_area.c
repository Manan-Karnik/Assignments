#include <stdio.h>
#include <math.h>

float l, b, rectangle_perimeter, rectangle_area;
float r, circle_perimeter, circle_area;
float s1, s2, s3, triangle_perimeter, semiperimeter, triangle_area;

int main()
{
    // Rectangle
    printf("Enter the length and breadth of rectangle: ");
    scanf("%f%f", &l, &b);

    rectangle_perimeter = 2 * (l + b);
    rectangle_area = l * b;

    printf("Perimeter of rectangle is: %f\nArea of rectangle is: %f\n", rectangle_perimeter, rectangle_area);

    // Circle
    printf("\nEnter the radius of circle: ");
    scanf("%f", &r);

    circle_perimeter = 2 * M_PI *r;
    circle_area = M_PI * pow(r, 2);

    printf("The perimeter of circle is %f\nThe area of circle is %f\n", circle_perimeter, circle_area);

    // Triangle
    printf("\nEnter the three sides of triangle: ");
    scanf("%f%f%f", &s1, &s2, &s3);

    triangle_perimeter = s1 + s2 + s3;
    semiperimeter = triangle_perimeter / 2;
    /*
    Area of a triangle using three sides: A = √[s(s-a)(s-b)(s-c)]
    Where s = semiperimeter, a = s1, b = s2, c = s3
    */
    triangle_area = sqrt(semiperimeter * (semiperimeter - s1) * (semiperimeter - s2) * (semiperimeter - s3));

    printf("The perimeter of triangle is %f\nThe area of triangle is %f\n", triangle_perimeter, triangle_area);

    return 0;
}
