#include "holberton.h"
/**
*_islower -show if low case or not
* @c : variable pour le check
* Return: 0 (mean true )
**/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
