#include <stdio.h>
#include <stdlib.h>

// Declare variables
char *text, ch;
int n = 0, m = 1, i = 0, num_words = 0, num_spaces = 0, num_lines = 0;


int main()
{
    // Give a initial memory to pointer
    text = (char*)malloc(sizeof(char));

    // Get input from user
    printf("Enter text ('.' on new line to terminate input):\n\n");

    while (ch != '.')
    {
        // Get input character
        ch = getchar();
        // Reallocate memory according to the number of input characters
        text = (char*)realloc(text, m * sizeof(char));
        // Store input
        text[n] = ch;
        // Increment n and m
        n++;
        m++;
    }

    // Loop through all characters
    for(i = 0; i < n + 1; i++)
    {
        // If character is Enter (New line)
        if (text[i] == '\n')
        {
            // Increment number of lines
            num_lines += 1;
            num_words += 1;
        }
        // If character is space, increase number of spaces and words
        if (text[i] == ' ')
        {
            num_spaces += 1;
            num_words += 1;
        }
    }

    // Print resultant words spaces and lines
    printf("\nWords: %d, Spaces: %d, Lines: %d\n", num_words, num_spaces, num_lines);

    // Deallocate pointer from memory
    free(text);
    return 0;
}
