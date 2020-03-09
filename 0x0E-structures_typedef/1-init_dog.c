#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - void
 * @d: var
 * @name: var
 * @age: Tvar
 * @owner: var
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
