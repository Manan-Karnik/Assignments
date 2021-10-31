#include <stdio.h>

int i, j, n;
char ch;

int  main()
{
	n = 5, ch = '*';

    // Print first half (Triangle)
	for(i = 1; i <= n; i++)
	{
        // Print spaces
    	for(j = 1; j <= (n - i); j++)
    	{
        	printf(" ");
    	}

        // Print '*'
    	for(j = 1; j <= (i * 2) - 1; j++)
    	{
        	printf("%c", ch);
    	}

    	printf("\n");
	}

    // Print second half (Inverted triangle)
    for(i = n; i > 0; i--)
	{
        // Print spaces
        for(j = 1; j <= (n - i); j++)
    	{
        	printf(" ");
    	}

        // Print '*'
    	for(j = 1; j <= (i * 2) - 1; j++)
    	{
        	printf("%c", ch);
    	}

    	printf("\n");
	}

}
