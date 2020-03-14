#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
unsigned int i;
int sum = 0;
va_list params;
va_start(params, n);
for (i = 0; i < n; i++)
sum += va_arg(params, int);
return (sum);
}
