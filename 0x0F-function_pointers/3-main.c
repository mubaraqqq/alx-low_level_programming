#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{

int num1 = atoi(argv[1]);
char *operator = argv[2];
int num2 = atoi(argv[3]);
int result;

int (*func)(int, int) = get_op_func(operator);

if (argc != 4)
{
fprintf(stderr, "Error: Invalid number of arguments\n");
exit(98);
}

if (func == NULL)
{
fprintf(stderr, "Error: Invalid operator\n");
exit(99);
}

result = func(num1, num2);
printf("%d\n", result);

return (0);
}
