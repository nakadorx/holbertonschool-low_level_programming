#include "holberton.h"
/**
* puts_half - check the code for Holberton School students.
* @str : char
* Return: Always 0.
*/
void puts_half(char *str)
{
int x, i = 0 ;
while (str[i + 1] != '\0')
{
i++;
}
if ( i % 2 == 0)
{

    for (x = i / 2 ; str[x] != '\0' ; x++ )
    {
        _putchar(str[x]);
    }

}
else
{
    for (x = (i / 2) + 1 ; str[x] != '\0' ; x++ )
    {
        _putchar(str[x]);
    }
}


_putchar('\n');
}