#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{
    //prompting user
    float change;

    do
    {
        change = get_float("Change owed: ");
    }
        while (change < 0);

    //declaring variables to hold the sum of each type of coin, and also the final number of coins

    int quarters25 = 0;
    int dimes10 = 0;
    int nickels5 = 0;
    int pennies1 = 0;
    int coins = 0;

    // first, hold the number of quarters if the change owed is >= 1
    int convertedchange = change;
    quarters25 = convertedchange * 4;

    //then, find the number (or cents) after the decimal point
    convertedchange *= 100;
    int cents = change * 100;
    cents -= convertedchange;

    //calculating how many quarters
    while (cents % 25 != cents)
    {
        cents -= 25;
        quarters25++;
    }

    //calculating how many dimes
    while (cents % 10 != cents)
    {
        cents -= 10;
        dimes10++;
    }

    //calculating how many nickels
    while (cents % 5 != cents)
    {
        cents -= 5;
        nickels5++;
    }

    //calculating how many pennies
    while (cents % 1 != cents)
    {
        cents -= 1;
        pennies1++;
    }

    //returning how many coins are owed

    coins = quarters25 + dimes10 + nickels5 + pennies1;
    printf("%i\n", coins);


}