#include <stdarg.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 * @h : int
 * 
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
size_t x;
i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
