#include "main.h"

/**
 * puts_half - print string followed by new line
 * @str: char parameter
*/

void puts_half(char *str)
{
int i = 0;
int mid;

while (str[i] != '\0')
i++;

if (i % 2 != 0)
mid = (i - 1) / 2;
else
mid = i  / 2;

mid++;
while (mid < i)
{
_putchar(str[mid]);
mid++;
}
_putchar('\n');
}
