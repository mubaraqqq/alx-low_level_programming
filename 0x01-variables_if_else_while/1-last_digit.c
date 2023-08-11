#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - check last digit
 *
 * Return: return 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
char str[50] = "";
int last_digit = abs(n % 10);

if (last_digit == 0)
{
strcpy(str, "and is 0");
}
else if (last_digit > 5)
{
strcpy(str, "and is greater than 5");
}
else if (last_digit < 6 && last_digit != 0) 
{
strcpy(str, "and is less than 6 and not 0");
}

printf("Last digit of %d is %d %s\n", n, last_digit, str);

return (0);
}
