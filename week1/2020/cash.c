#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Prompt user for change owed
    float amount_owed;
    do
    {
        amount_owed = get_float("Change owed: \n");    
    }
    while (amount_owed <= 0.00);
   
    // Converts the change owed to cents
    int cents = round(amount_owed * 100);
    
    int remaining_change = cents;
    int coins_used = 0;
    
    // Calculates number of quarters
    int quarters = 0;
    while (remaining_change >= 25)
    {
        quarters = remaining_change / 25;   
        remaining_change -= quarters * 25;
        coins_used += quarters;
        break;
    }
    
    // Calculates number of dimes
    int dimes = 0;
    while (remaining_change >= 10)
    {
        dimes = remaining_change / 10;
        remaining_change -= dimes * 10;
        coins_used += dimes;
        break;
    }
    
    // Calculates number of nickles
    int nickles = 0;
    while (remaining_change >= 5)
    {
        nickles = remaining_change / 5;
        remaining_change -= nickles * 5;
        coins_used += nickles;
        break;
    }
    
    // Calculates number of pennies
    int pennies = 0;
    while (remaining_change == 1)
    {
        pennies = remaining_change / 1;
        remaining_change -= pennies * 1;
        coins_used += pennies;
        break;
    }
    
    printf("%i\n", coins_used);
}
