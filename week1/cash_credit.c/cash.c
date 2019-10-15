// Asks the user how much change is owed and then prints the
// minimum  number of coins using: quarters, dimes, nickles and
// pennies.

#include <cs50.h>
#include <math.h>
#include <stdio.h>

float get_positive_float(string prompt);

int main(void)
// Prompts user for the amount of changed owed
{
    float change_to_be_returned = get_positive_float("=> Please enter the amount of change owed: ");

    int change = round(change_to_be_returned * 100);

    int coins = 0;
    while (change >= 25)
    {
        coins++;
        change -= 25;
    }

    while (change >= 10)
    {
        coins++;
        change -= 10;
    }

    while (change >= 5)
    {
        coins++;
        change -= 5;
    }

    while (change >= 1)
    {
        coins++;
        change -= 1;
    }

    printf("The minimal number of coins that can be returned is: %i\n",  coins);
}

// Prompts user for positive integer
float get_positive_float(string prompt)
{
    float x;
    do
    {
        x = get_float("%s", prompt);
    }
    while (x < 0);
    return x;
}
