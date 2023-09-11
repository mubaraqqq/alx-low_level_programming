#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: struct dog
*/


struct dog
{
char *name;
float age;
char *owner;
};

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %d\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s\n", d->owner);
}



int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}