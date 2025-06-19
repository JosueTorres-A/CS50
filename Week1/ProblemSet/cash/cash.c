#include <cs50.h>
#include <stdio.h>

int calculate_change(int change);
int calculate_coins(int change, int type);

const int QUARTER_COIN = 25;
const int DIME_COIN = 10;
const int NICKEL_COIN = 5;
const int PENNY_COIN = 1;

int main(void)
{
    int change_owed;

    do
    {
        change_owed = get_int("Enter the change owed:\n");
    }
    while (change_owed <= 0);

    int coins = calculate_change(change_owed);

    printf("%i\n", coins);

    return 0;
}

int calculate_change(int change)
{
    int qty_coins = 0;

    int quarters = calculate_coins(change, QUARTER_COIN);

    change -= quarters * QUARTER_COIN;

    int dimes = calculate_coins(change, DIME_COIN);

    change -= dimes * DIME_COIN;

    int nickels = calculate_coins(change, NICKEL_COIN);

    change -= nickels * NICKEL_COIN;

    int pennys = calculate_coins(change, PENNY_COIN);

    change -= pennys * PENNY_COIN;

    qty_coins = quarters + dimes + nickels + pennys;

    return qty_coins;
}

int calculate_coins(int change, int type)
{
    int qty = change / type;
    return qty;
}