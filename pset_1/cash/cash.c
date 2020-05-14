#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    long card_number;
    do
    {
        card_number = get_long(">> Please enter a card number: ");
    }
    while (card_number <= 0);

    // while (?????)
    card_number /= 10;
    int sec_to_last_num = card_number % 10;
    printf("2nd to last digit: %i\n", sec_to_last_num);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num1 = card_number % 10;
    printf("Next Digit1: %i\n", next_num1);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num2 = card_number % 10;
    printf("Next Digit2: %i\n", next_num2);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num3 = card_number % 10;
    printf("Next Digit3: %i\n", next_num3);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num4 = card_number % 10;
    printf("Next Digit4: %i\n", next_num4);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num5 = card_number % 10;
    printf("Next Digit5: %i\n", next_num5);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num6 = card_number % 10;
    printf("Next Digit6: %i\n", next_num6);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num7 = card_number % 10;
    printf("Next Digit7: %i\n", next_num7);
    printf("Remaining Card Numbers: %li\n\n", card_number);

    card_number /= 10;
    card_number /= 10;
    int next_num8 = card_number % 10;
    printf("Next Digit8: %i\n", next_num8);
    printf("Remaining Card Numbers: %li\n\n", card_number);
}