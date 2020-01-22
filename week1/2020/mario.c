#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        // Prompts user for a hight between 1 and 1 inclusive
        height = get_int("Please choose a hight from 1 to 8: ");
    }
    while (height < 1 || height > 8);
    
    // Iterates up to the number of times that user entered
    for (int i = 1; i <= height; i++)
    {
        // Number of spaces per line
        for (int x = 1; x <= height - i; x++)
        {
            printf(" ");
        }
        for (int y = 1; y <= i; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}
