    #include "holberton.h"
    /**
     * print_times_table - Entry point
     * @n : int
     * Return: Always 0 (success)
     */

    void print_times_table(int n)
    {
    int x, y;
    if (n > 15 || n < 0)
    {

    }
    else
    {
    for (x = 0 ; x <= n ; x++)
    {
    for (y = 0 ; y <= n ; y++)
    {
    if(x* y > 99)
    {
    _putchar(((x * y) / 100) + '0');
    _putchar(((x * y) / 10) % 10 + '0');
    _putchar(((x * y) % 10 )+ '0');
    if (y != n)
    {
    _putchar(',');
    _putchar(' ');
    }
    }
    else if (x * y < 10)
    {
    _putchar((x * y )+ '0');
    if (y != n)
    {
    _putchar(',');
    _putchar(' ');
    _putchar(' ');
    if (x * (y + 1) < 10)
    {
    _putchar(' ');
    }
    }
    }
    else
    {
    _putchar(x * y / 10 + '0');
    _putchar(x * y % 10 + '0');
    if (y != n)
    {
    _putchar(',');
    _putchar(' ');
    if (x * (y + 1) < 100)
    {
    _putchar(' ');
    }
    }
    }
    }
    _putchar('\n');
    }
    }
    }
