#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompts user for a height from 1 - 8
    int height;
    do
    {
        height = get_int("Please enter a height from 1 to 8: ");
    }
    while (height < 1 || height > 8);

    // Produces the height
    for (int i = 1; i <= height; i++)
    {
        // Produces the 1st set of white space
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        // Produces the 1st set of steps
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        printf("  ");

        // Produces the 2nd set of steps
        for (int l = 1; l <= i; l++)
        {
            printf("#");
        }

        printf("\n");
    }
}