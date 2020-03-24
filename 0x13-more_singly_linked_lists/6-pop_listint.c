#include "lists.h"
/**
 * pop_listint - check the code for Holberton School students.
 * @head : int
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp, *x;

	if (*head == NULL)
		return (0);
	x = *head;
	i = x->n;
	tmp = x->next;
	free(x);
	*head = tmp;
	return (i);
}
