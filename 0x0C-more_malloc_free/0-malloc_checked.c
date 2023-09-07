#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate specified amount of memory
 * @b: amount of bytes to allocate
 * Return: return pointer to memory
*/

void *malloc_checked(unsigned int b) {
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
