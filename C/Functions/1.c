#include <stdio.h>
#include <stdlib.h>

// Declare variables
char *text, ch;
int i = 0, j = 1, n;
int words, spaces, lines;

void countInText(char *text, int n, int *add_words, int *add_spaces, int *add_lines)
{
    // Decalare variables to store number of words lines and spaces
    int num_words = 0, num_spaces = 0, num_lines = 0;
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
    // Use pointers to point to the variables
    *add_words = num_words;
    *add_spaces = num_spaces;
    *add_lines = num_lines;
}

int main()
{
    // Give a initial memory to pointer
    text = (char*)malloc(sizeof(char));

    // Get input from user
    printf("Enter text ('.' on new line to terminate input):\n\n");

    while (ch != '.')
    {
        // Get input
        ch = getchar();
        // Reallocate memory according to the number of input characters
        text = (char*)realloc(text, j * sizeof(char));
        // Store input
        text[i] = ch;
        i++;
        j++;
    }
    // set n to length of string
    n = i;

    // Call function to count words spaces and lines
    countInText(text, n, &words, &spaces, &lines);

    // Print resultant words spaces and lines
    printf("\nWords: %d, Spaces: %d, Lines: %d\n", words, spaces, lines);

    // Deallocate pointer from memory
    free(text);
    return 0;
}
