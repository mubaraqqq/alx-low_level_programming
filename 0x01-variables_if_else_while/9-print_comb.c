#include <stdio.h>

/**
 * main - print numberz
 * Return: return 0
*/

int main(void)
{
int i = 0;

do {
putchar(i + '0');
if (i != 9)
{
putchar(44);
putchar(' ');
}
i++;
} while (i < 10);

putchar('\n');

return (0);
}
