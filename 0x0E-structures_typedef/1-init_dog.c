#include "main.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog
 * @d: dog struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{


d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);

d->name = name;
d->age = age;
d->owner = owner;
}

struct dog
{
char *name;
float age;
char *owner;
};