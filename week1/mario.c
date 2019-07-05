#include <cs50.h>
#include <stdio.h>

int get_positive_int (string prompt);

int main(void)
{
    int height = get_positive_int("Please choose a height between 1 and 8 (inclusive) and enter it now: ");
    
    for (int i = 1; i <= height; i++)
    {
        int a;
        for (a = 0; a <= height-i-1; a++)
        {
            printf(" ");
        }
        for (int b = 1; b <= i; b++)
        {
            printf("#");
        }
        printf ("\n");
    }
}
int get_positive_int (string prompt)
{
    int n;
    do
    {
        n = get_int ("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
    
}
    

