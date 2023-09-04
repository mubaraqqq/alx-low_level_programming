#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - helper fn
 * @coins: arg1
 * Return: integer
*/

int min_coins(int cents)
{
int coin_values[] = {25, 10, 5, 2, 1};
int num_coins = 5;

int min_coins_needed = cents;
for (int i = 0; i < num_coins; i++)
{
int coins_needed = cents / coin_values[i];
if (coins_needed < min_coins_needed)
min_coins_needed = coins_needed;
}
return (min_coins_needed);
}

/**
 * main - main fn
 * @argc: first
 * @argv: second
 * Return: Integer
*/

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

int min_coins_needed = min_coins(cents);
printf("%d\n", min_coins_needed);
return (0);
}
