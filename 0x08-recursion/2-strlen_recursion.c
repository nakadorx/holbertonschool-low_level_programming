#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: int
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
if (!*s)
return (0);
return (1 + _strlen_recursion(s + 1));
}
