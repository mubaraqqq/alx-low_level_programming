#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - check positive or negative
 *
 * Return: return 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (n == 0)
printf("%d %s", n, "is zero");
else if (n > 0)
printf("%d %s", n, "is positive");
else if (n < 0)
printf("%d %s", n, "is negative");

printf("\n");
return (0);
}
