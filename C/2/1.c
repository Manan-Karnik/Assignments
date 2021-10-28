#include <stdio.h>

int s1, s2, s3;

int main()
{
    printf("Enter 3 sides of a triangle:");
    scanf("%d%d%d", &s1, &s2, &s3);

    if(s1 == s2 && s2 == s3)
    {
        printf("Triangle is equilateral");
    }
    else if(s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("Triangle is isoceles");
    }
    else
    {
        printf("Triangle is scalene");
    }

    return 0;
}
