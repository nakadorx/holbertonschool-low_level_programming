#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @separator : int
 * @n: int
 * 
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list params;
unsigned int i;

va_start(params, n);
for (i = 0; i < n ; i++)
{
printf("%d", va_arg(params, int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(params);
}
