#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Asks how many cents the customer is owed

    int cents;

    cents = get_cents();

    // Calculates the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculates the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculates the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculates the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sums coins
    int coins = quarters + dimes + nickels + pennies;

    // Prints total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;

    do
    {
        cents = get_int("Cents owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents / 1;
}
