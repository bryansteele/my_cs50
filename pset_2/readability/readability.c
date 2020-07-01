#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// PROTOTYPES
int counts_letters(string str);
int counts_words(string str);
int counts_sentences(string str);

int main(void)
{
    // PROMPTS USER TO ENTER SOME TEXT
    string text = get_string("==> Please enter some text.\n==> ");

    // CALLS FUNCTIONS
    float num_letters = counts_letters(text);
    float num_words = counts_words(text);
    float num_sentences = counts_sentences(text);

    // AVERAGE NUMBER OF LETTERS PER 100 WORDS
    float l = 100 * (num_letters / num_words);

    // AVERAGE NUMBER OF SENTENCES PER 100 WORDS
    float s = num_sentences * (100 / num_words);

    // COLEMAN-LIAU FORMULA
    float i = (0.0588 * l) - (0.296 * s) - 15.8;
    int index = round(i);

    // PRINTS OUT THE GRADE LEVEL TO WHICH THE TEXT IS
    if (index >= 16)
    {
        printf("==> Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("==> Before Grade 1\n");
    }
    else
    {
        printf("==> Grade %i\n", index);
    }
}

// COUNTS THE NUMBER OF LETTERS
int counts_letters(string str)
{
    int letters = 0;

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            letters++;
        }
    }
    return letters;
}

// COUNTS THE NUMBER OF WORDS
int counts_words(string str)
{
    int words = 0;

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            words++;
        }
    }
    return words + 1;
}

// COUNTS THE NUMBER OF SENTENCES
int counts_sentences(string str)
{
    int sentences = 0;

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}