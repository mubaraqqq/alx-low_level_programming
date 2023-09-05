#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of the array
 * @c: char to fill it with
 * Return: array
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = (char *)malloc(size * sizeof(char));

if (size == 0)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
