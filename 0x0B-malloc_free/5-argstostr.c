#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * argstostr - check the code for Holberton School students.
 * @ac: int
 * @av: int
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
int i = 0, j = 0, y = 0;
char *x;
if (ac <= 0 || av == NULL)
return (NULL);
while (i < ac)
{
while (av[i][j])
j++;
i++;
}
x = malloc((i + j + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (i = 0 ; i < ac ; i++)
{
for (j = 0 ; av[i][j] ; j++)
{
x[y] = av[i][j];
y++;
}
x[y] = '\n';
y++;
}
x[y] = '\0';
return (x);
}
