
#include "holberton.h"
/**
 * sl - check the code for Holberton School students.
 * @s: int
 * Return: Always 0.
 */

int sl(char *s)
{
if (!*s)
return (0);
else
return (1 + sl(s + 1));
}

/**
 * pl - check the code for Holberton School students.
 * @i: int
 * @s: int
 * @l: int
 * Return: Always 0.
 */

int pl(int l, int i, char *s)
{
if (i > l / 2)
return (1);
else if (s[i] != s[l - i - 1])
return (0);
else
return (pl(l, i + 1, s));
}

/**
 * is_palindrome - check the code for Holberton School students.
 * @s: int
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
int l;
l = sl(s);
return (pl(l, 0, s));
}
