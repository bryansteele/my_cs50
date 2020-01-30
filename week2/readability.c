#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Please enter a string of text.\n==> ");

    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <='Z'))
        {
            letters++;
        }
    }
    printf("==> %i\n", letters);

    int words = 0;
    for (int j = 0, x = strlen(text); j < x; j++)
    {
        if (text[j] == ' ' && text[j + 1] != ' ')
        {
            words++;
        }
    }
    printf("==> %i\n", words + 1);
}
