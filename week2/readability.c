#include <cs50.h>
#include <stdio.h>
#include <string.h>

int counts_letters(string str);
int counts_words(string str);
int counts_sentences(string str);

int main(void)
{
    string text = get_string("Please enter a string of text.\n==> ");

    int num_letters = counts_letters(text);
    int num_words = counts_words(text);
    int num_sentences = counts_sentences(text);

    printf("==> %i letter(s)\n", num_letters);
    printf("==> %i word(s)\n", num_words + 1);
    printf("==> %i sentence(s)\n", num_sentences);
}

int letters = 0;
int counts_letters(string str)
{
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <='Z'))
        {
            letters++;
        }
    }
    return letters;
}

int words = 0;
int counts_words(string str)
{
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            words++;
        }
    }
    return words;
}

int sentences = 0;
int counts_sentences(string str)
{
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
