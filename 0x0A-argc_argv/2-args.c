#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments
 * @argc: first
 * @argv: second
 * Return: Integer
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (EXIT_SUCCESS);
}
