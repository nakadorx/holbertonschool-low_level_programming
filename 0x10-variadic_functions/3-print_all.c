#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - check the code for Holberton School students.
 * @format : int
 * 
 * Return: Always 0.
 */

void print_all(const char *const format, ...)
{
va_list params;
unsigned int i = 0;
char *separator = ", ";
char *ch;
va_start(params, format);
i = 0;
while (format && format[i])
{
switch (format[i])
{
    case  's' :
        ch = va_arg(params, char *);
            if (ch == NULL)
                ch = "(nil)";
                printf("%s", ch);
                if (format[i + 1])
                printf("%s", separator);
        break;
    case  'i' :
        printf("%d", va_arg(params, int));
        if (format[i + 1])
        printf("%s", separator);
        break;
    case 'f':
        printf("%f", va_arg(params, double));
        if (format[i + 1])
        printf("%s", separator);
    case 'c':
        printf("%c", va_arg(params, int));
        if (format[i + 1])
        printf("%s", separator);
        break;
    default:
        break;
}

i++;
}
va_end(params);
printf("\n");
}
