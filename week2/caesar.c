#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // VALLIDATING 2 CMD-LINE ARGS?
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // VALIDATING THE CMD-LINE ARGUMENT FOR DIGITS
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // Check for digits
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // CONVERTS STRING TO INTEGER
    int key = atoi(argv[1]);
    printf("%i\n", key);

    // PROMPT USER FOR PLAINTEXT
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // ENCRPYPT AND OUTPUT THE TEXT
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + key) % 26) + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + key) % 26) + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}