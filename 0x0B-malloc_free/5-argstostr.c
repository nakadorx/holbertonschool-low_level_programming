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
j = 0;
i = 0;
while (i < ac)
{
while (av[i][j])
{
x[y] = av[i][j];
y++;
j++;
}
x[y] = '\n';
y++;
i++;
}
x[y] = '\0';
return (x);
}
