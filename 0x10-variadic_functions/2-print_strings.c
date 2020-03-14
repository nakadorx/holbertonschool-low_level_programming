#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - check the code for Holberton School students.
 * @separator : int
 * @n: int
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list params;
unsigned int i = 0;
char *ch;
va_start(params, n);
while (i < n)
{
ch = va_arg(params, char *);
if (ch)
printf("%s", ch);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
i++;
}
printf("\n");
va_end(params);
}
