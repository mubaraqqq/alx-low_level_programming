#include "main.h"

/**
 * create_array - create an array
 * @size: size of the array
 * @c: char to fill it with
 * Return: array
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = (char *)malloc(size * sizeof(char));

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
