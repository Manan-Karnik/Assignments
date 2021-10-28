#include <stdio.h>

int year;

int main()
{
    printf("Enter a year: ");
    scanf("%d", &year);

    /*
    Condition for leap year:
        1. The year is multiple of 400
        2. The year is multiple of 4 and not multiple of 100
    */
    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}
