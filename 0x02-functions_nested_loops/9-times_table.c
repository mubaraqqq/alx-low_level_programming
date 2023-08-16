#include "main.h"

/**
 * times_table - print 9 times table
*/

void times_table(void)
{
int minutes;
int hours;

for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes <= 59; minutes++)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
_putchar('\n');
}
}
}
