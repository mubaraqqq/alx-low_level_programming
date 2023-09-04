#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: first
 * @argv: second
 * Return: integer
*/

int main(int argc, char *argv[])
{
int num1, num2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", num1 * num2);

return (EXIT_SUCCESS);
}
