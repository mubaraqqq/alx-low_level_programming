#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - multiply two numbers
 * @result: result
 * @num1: num1
 * @num2: num2
*/

void multiply(int *result, int num1, int num2)
{
*result = 0;
int i;

for (i = num2; i > 0; i /= 10)
{
*result *= 10;
*result += (num1 % 10) * (i % 10);
num1 /= 10;
}
}


/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments array
 * Return: multiplication result int
*/

int main(int argc, char *argv[])
{
int i;
int *result;
int n1, n2;

if (argc != 3) {
fprintf(stderr, "Error\n");
exit(98);
}

for (i = 0; argv[1][i] != '\0'; i++)
{
if (argv[1][i] < '0' || argv[1][i] > '9')
{
fprintf(stderr, "Error\n");
exit(98);
}
}

for (i = 0; argv[2][i] != '\0'; i++)
{
if (argv[2][i] < '0' || argv[2][i] > '9')
{
fprintf(stderr, "Error\n");
exit(98);
}
}

n1 = strtol(argv[1], NULL, 10);
n2 = strtol(argv[2], NULL, 10);

result = malloc(sizeof(int));

multiply(result, n1, n2);

printf("%d\n", *result);

free(result);

return (0);
}
