#include "holberton.h"
/**
 * _strpbrk - check the code for Holberton School students.
 * @s: int
 * @accpet: int
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0,j = 0;
    while (s[i] != '\0')
    {

        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                return (s + i);
                break;
            }
            j++;
        }
        i++;
    }
return (s + i);
}
