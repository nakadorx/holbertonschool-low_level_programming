#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @separator : int
 * @n: int
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list params;
unsigned int i = 0;
va_start(params, n);
while (i < n)
{
printf("%d", va_arg(params, int));
if (separator && i < n - 1)
printf("%s", separator);
i++;
}
printf("\n");
va_end(params);
}
