#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    // Declare variables
    FILE *src, *dst;
    char ch, str[50];

    // Open file1 in read mode
    src = fopen("file1.txt","r");

    // If file not found print file missing
    if(src == NULL)
    {
        printf("File Missing!");
    }
    else
    {
        // Create file2
        dst = fopen("file2.txt","w");
        // Get chars from file1 (src)
        ch = fgetc(src);

        // Put char in file2 (dst) till EOF and get new char from file1 (src)
        while(ch != EOF)
        {
            fputc(ch, dst);
            ch = fgetc(src);
        }
        printf("The contents are copied\n");

        // Close dst and open in read mode
        fclose(dst);
        dst = fopen("file2.txt", "r");

        // While not end of file dst scan and puts string from dst
        while(!feof(dst))
        {
            fscanf(dst, "%s", str);
            puts(str);
        }
        // Close both files
        fclose(src);
        fclose(dst);
    }
    return 0;
}
