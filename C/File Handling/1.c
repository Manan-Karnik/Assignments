#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	// Declare variables
	FILE *f1;
	char c;
	int characters = 0, spaces = 0, lines = 1, words = 0;

	// Open file1 in read mode
	f1 = fopen("file1.txt", "r");

	// If file not found print file missing
	if(f1 == NULL)
	{
		printf("File Missing!");
	}
	else
	{
		// Get chars from file1
		c = fgetc(f1);
		// Print c and increment characters till c is not EOF
		while(c != EOF)
		{
			printf("%c", c);
			characters += 1;
			// If c is newline increment words and lines
			if(c == '\n')
			{
				words += 1;
				lines += 1;
			}
			// If c is space increment spaces and words
			if(c == ' ')
			{
			    spaces += 1;
				words += 1;
			}
			// Get next character from file1
			c = fgetc(f1);
		}
	// Print result and close file
	printf("\n\nNumber of Letters: %d\n", characters);
	printf("Number of spaces : %d\n", spaces);
	printf("Number of words : %d\n", words + 1);
	printf("Number of lines : %d\n", lines);
	fclose(f1);
	}
	return 0;
}
