#ifndef _0_DOG_H_
#define _0_DOG_H_
/**
 * struct dog - check the code for Holberton School students.
 * @name: int
 * @age : int
 * @owner : int
 * Return: Always 0.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
