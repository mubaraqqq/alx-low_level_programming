#include "main.h"

/**
 * jack_bauer - print 24 hours
*/

void jack_bauer(void)
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
