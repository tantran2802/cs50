#include <stdio.h>
#include <cs50.h>
int main()
{
    int cent25 = 25;
    int cent10 = 10;
    int cent5 = 5;
    int cent1 = 1;
    int change = get_int("Change owed: ");
    int numberOfCoin = 0;
    if (change >= cent25)
    {
        numberOfCoin += change / cent25;
        change = change % cent25;
    }
    if (change >= cent10)
    {   
        numberOfCoin += change / cent10;
        change = change % cent10;
    }
    if (change >= cent5)
    {
        numberOfCoin += change / cent5;
        change = change % cent5;
    }
    if (change >= cent1)
    {
        numberOfCoin += change / cent1;
        change = change % cent1;
    }
    printf("%i\n", numberOfCoin);
    return 0;
}