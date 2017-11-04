#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {

    printf("O hai! How much change is owed? ");
}

float n;

do
{
    n = get_float(); // takes in a float
}

while (n <= 0 );  // If n less than or = to 0 than stop

    n = int round(n *100);

//DOES MODULO FOR EACH COIN
int i = 0;

while (n >= 25) //finds quarters
{
    i++;
    n = n - 25;
}

while (n >= 10) //finds dimes
{
    i++;
    n = n - 10;
}

while (n >= 5) //finds nickles
{
    i++;
    n = n - 5;
}

while (n >= 1) //finds pennies
{
    i++;
    n = n - 5;
}

printf("%d/n", i);