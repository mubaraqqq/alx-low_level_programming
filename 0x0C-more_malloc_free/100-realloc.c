#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

if (ptr == NULL)
return malloc(new_size);

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size < old_size)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < new_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];

return (new_ptr);
}


if (new_size == old_size)
return (ptr);

void *new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

for (unsigned int i = 0; i < old_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];

free(ptr);
return (new_ptr);
}
