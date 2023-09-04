#include <stdio.h>
#include <stdlib.h>

/**
 * main - print program name
 * @argc: length of argv array
 * @argv: array of arguments
 * Return: Integer
*/

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (EXIT_SUCCESS);
}
