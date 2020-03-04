#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


for (i = 0 ; str ; i++)
{
if (!str[i] == ' ')
{
z++;
x = strlen(str + i);
for (j = 0 ; j < x ; j++)
{
a[j] = str[i + x];
}
a[j + 1] = ' ';
i = i + x + 1;
}


/**
* _strlen - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/
int strlen(char *s)
{
int i;
while (s[i] != ' ' || s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * strtow - check the code for Holberton School students.
 * @str: int
 * Return: Always 0.
 */
char **strtow(char *str)
{
int i, j, x, l, z = 0;
char *a, *r;
if (str == NULL || *str == '\0')
return (NULL);
a = remake(str);
}
r = (char **)malloc((z + 1) * sizeof(char *));
if (r == NULL)
{
free(r);
return (NULL);
}
for (i = 0 ; i <= z ; i++)
{
r[i] = (char *)malloc((strlen + 1) * sizeof(char));
if (r[i] == NULL)
{
for (j = 0; j <= i; j++)
free(r[j]);
free(r);
return (NULL);
}
if (!a[i] == ' ')
{
for (x = 0, x < strlen(a + i) ; x++)
{
r[x] = a[i + x;
}
r[x + 1] = '\0';
i = i + x;
}
}
return (r);
}