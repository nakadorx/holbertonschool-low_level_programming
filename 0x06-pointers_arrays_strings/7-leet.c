#include "holberton.h"
/**
* leet - check the code for Holberton School students.
* @x : char
* Return: Always 0.
*/


char *leet(char *x)
{
    int j,i = 0;
    char a[] = "AEOTL";
    char t[] = "43071";
    while (x[i] != '\0')
    {
        for (j = 0 ; a[j] != '\0' ; j++)
        {
            if (x[i] == a[j] || x[i] == (a[j] + 32))
            {
                x[i] = t[j];
            }
        } 
        i++;
    }
    return (x);
}