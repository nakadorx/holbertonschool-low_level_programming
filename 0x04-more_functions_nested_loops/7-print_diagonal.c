#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n : int
 * Return: Always 0.
 */

void print_diagonal(int n)
{
    if (n < 0)
    {
        for (x = 0 ; x <= n ; x++)
        {
            for (i = 0 ; i <= n ; i++)
            {
                if (i != 0)
                {
                    _putchar(' ');
                }
            }
            _putchar('\\');
            _putchar('\n');
        }

    }
}