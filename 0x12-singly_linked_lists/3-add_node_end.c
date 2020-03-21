#include "lists.h"
/**
 * add_node_end - check the code for Holberton School students.
 * @head : int
 * @str : int
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
unsigned int i = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
while (str[i])
i++;
new->len = i;
new->next = NULL;
tmp = *head;
if (tmp == NULL)
{
*head = new;
}
else
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
}
return (*head);
}
