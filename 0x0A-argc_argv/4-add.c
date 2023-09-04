#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: first
 * @argv: second
 * Return: integer
*/

int main(int argc, char *argv[])
{
int i, num;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (EXIT_SUCCESS);
}

for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);

if (num <= 0)
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);

return (EXIT_SUCCESS);
}
