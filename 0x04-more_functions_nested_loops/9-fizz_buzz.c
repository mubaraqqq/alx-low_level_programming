#include <stdio.h>

/**
 * fizz_buzz - print fizz buzz
*/

void main(void)
{
int n;

for (n = 1; n < 101; n++)
{
if (n % 3 == 0 && n % 5 != 0)
{
printf("Fizz");
printf(" ");
}
else if (n % 5 == 0 && n % 3 != 0)
{
printf("Buzz");
printf(" ");
}
else if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%d", n);
printf(" ");
}
}
}
