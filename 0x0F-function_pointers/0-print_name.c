#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - check the code for Holberton School students.
 * @name : int
 * @f : int
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
