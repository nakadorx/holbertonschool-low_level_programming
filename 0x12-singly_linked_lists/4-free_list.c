#include "lists.h"
/**
 * free_list - check the code for Holberton School students.
 * @head : int
 * Return: Always 0.
 */
void free_list(list_t *head)
{
list_t *c;

while ((c = head) != NULL)
{
head = head->next;
free(c->str);
free(c);
}
}
