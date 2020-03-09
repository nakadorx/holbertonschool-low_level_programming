 #include "dog.h"
/**
 * new_dog - check the code for Holberton School students.
 * @name : int
 * @age : int
 * @owner : int
 * Return: Always 0.
 */


dog_t *new_dog(char *name, float age, char *owner)
{
int i, j = 0, x = 0;
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
while (name[j])
j++;
while (owner[x])
x++;
d->name = malloc(sizeof(char) * (l + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * (x + 1));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
d->age = malloc(sizeof(int));
if (d->age == NULL)
{
free(d->owner);
free(d->name);
free(d);
return (NULL);
}
d->age = age;
for (i = 0; i <= l; i++)
d->name[i] = name[i];
for (i = 0; i <= x; i++)
d->owner[i] = owner[i];
return (d);
}
