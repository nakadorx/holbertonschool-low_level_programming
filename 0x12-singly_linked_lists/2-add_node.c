#include "lists.h"
/**
 * add_node - check the code for Holberton School students.
 * @head : int
 * @str : int
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{

list_t *new;
unsigned int i = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
while (str[i])
i++;
new->len = i;
new->next = *head;
*head = new;
return (*head);
}
