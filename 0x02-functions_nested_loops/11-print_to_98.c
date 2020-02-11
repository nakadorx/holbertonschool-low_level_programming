#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n : is a number
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
int i = n;
if (n <= 98)
{
while (i <= 98)
{
if (i == 98)
printf("%d", i);
else
printf("%d, ", i);
i++;
}
}
else if (n >= 98)
{
while (i >= 98)
{
if (i == 98)
printf("%d", i);
else
printf("%d, ", i);
i--;
}
}
else
{
printf("") 
}

}
