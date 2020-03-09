#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - fun
 * @name: name var
 * @age: age var
 * @owner:owner var
 * Return:dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i, j;
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
i = 1;
while (name[i] != '\0')
i++;
d->name = malloc(i + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
j = 1;
while (owner[j] != '\0')
j++;
d->owner = malloc(j + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
d->age = age;
for (i = 0; name[i] != '\0'; i++)
d->name[i] = name[i];
for (j = 0; owner[j] != '\0'; j++)
d->owner[j] = owner[j];
return (d);
}
