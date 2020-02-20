#include "holberton.h"
/**
* *_strcmp - check the code for Holberton School students.
* @s1 : int
* @s2 : int
* Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
