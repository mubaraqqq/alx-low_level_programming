#include <stdio.h>

/**
 * print_int - print numberz
 * @param num: integer number to print
*/

void print_int(int num)
{
if (num < 0)
{
putchar('-');
num = -num;
}

if (num / 10)
{
print_int(num / 10);
}

putchar(num % 10 + '0');
}

/**
 * main - print numberz
 * Return: return 0
*/

int main(void)
{
int i = 0;

do {
print_int(i++);
} while (i < 10);

putchar('\n');

return (0);
}
