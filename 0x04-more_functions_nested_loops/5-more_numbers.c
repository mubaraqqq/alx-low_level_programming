#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14, ten times
*/

void more_numbers(void)
{
int i;
int count;

for (count = 0; count <= 9; count++)
{
for (i = 0; i <= 14; i++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}

}
