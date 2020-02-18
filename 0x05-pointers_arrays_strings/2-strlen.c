#include "holberton.h"
/**
* _strlen - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/
int _strlen(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return (i);
}
