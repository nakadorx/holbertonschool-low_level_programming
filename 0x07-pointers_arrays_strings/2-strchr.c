#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 * @s: int
 * @c: int
 *
 * Return: Always 0.
 */


char *_strchr(char *s, char c)
{
    int i = 0, j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
        return (s + i);
        }
        i++;
    }
    if (s[i + 1] == '\0')
    {
        return ('\0');
    }
    else
    {
    while (s[i] != '\0')
    {
        s[j] = s[i];
        i++;
        j++;
    }
    while (s[j+1] != '\0')
    {
        s[j] = '\0';
        j++;
    }

    }
    return (s);
}
