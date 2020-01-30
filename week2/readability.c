#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string text = get_string("Please enter a string of text.\n==> ");


    int count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <='Z'))
        {
            count++;
        }
    }
    printf("==> %i\n", count);
}
