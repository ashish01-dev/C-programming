#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt user for height between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Build the pyramid
    for (int row = 1; row <= height; row++)
    {
        // Print leading spaces
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

        // Print left hashes
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        // Gap
        printf("  ");

        // Print right hashes
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        // Newline after each row
        printf("\n");
    }
}
