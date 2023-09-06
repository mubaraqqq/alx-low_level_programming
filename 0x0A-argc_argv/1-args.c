#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print number of arguments 
 * @argc: first
 * @argv: second
 * Return: integer
*/

int main(int argc, char *argv[])
{
(void)argc;
printf("%d\n", argc - 1);
return (EXIT_SUCCESS);
}
