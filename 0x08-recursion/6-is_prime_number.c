#include "main.h"

/**
 * check_prime - check if prime number
 * @n: integer to check
 * @i: second param
 * Return: 0 or 1
*/

int check_prime(int n, int i)
{
if (i == n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}


/**
 * is_prime_number - check if prime number
 * @n: number to check
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}

