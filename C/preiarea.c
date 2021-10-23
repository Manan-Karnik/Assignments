// Include stdio.h for i/o functions
#include <stdio.h>
// Include math.h for M_PI variable, pow() and sqrt() functions
#include <math.h>

void main()
{
    /* Rectangle */
    float l, b, rectangle_area, rectangle_perimeter;
    // Get values of length and breadth of rectangle from user
    printf("Input length and breadth of rectangle: ");
    scanf("%f%f", &l, &b);

    // Calculate area and perimeter of rectangle
    rectangle_area = l * b;
    rectangle_perimeter = 2 * (l + b);

    // Print area and perimeter of rectangle
    printf("Area of rectangle is: %f\nPerimeter of rectangle is: %f\n", rectangle_area, rectangle_perimeter);

    /* Circle */
    float r, circle_area, circle_perimeter;
    // Get value of radius of circle from user
    printf("\nInput radius of circle: ");
    scanf("%f", &r);

    // Calculate area and perimeter of circle
    circle_area = M_PI * pow(r, 2);
    circle_perimeter = 2 * M_PI * r;

    // Print area and perimeter of circle
    printf("Area of circle is: %f\nPerimeter of circle is: %f\n", circle_area, circle_perimeter);

    /* Triangle */
    float s1, s2, s3, semiperimeter, triangle_area, triangle_perimeter;
    // Get values of the three sides of triangle from user
    printf("\nInput three sides of triangle: ");
    scanf("%f%f%f", &s1, &s2, &s3);

    // Calculate perimeter and semiperimeter of triangle
    triangle_perimeter = s1 + s2 + s3;
    semiperimeter = triangle_perimeter / 2;
    /*
    Calculate area of triangle using the formula:
    Area = √[s(s-a)(s-b)(s-c)]
    where s = semiperimeter, a = s1, b = s2, c = s3
    */
    triangle_area = sqrt(semiperimeter * (semiperimeter - s1) * (semiperimeter - s2) * (semiperimeter - s3));

    // Print area and perimeter of triangle
    printf("Area of triangle is: %f\nPerimeter of triangle is: %f\n", triangle_area, triangle_perimeter);
}
