#include "lists.h"
/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head : int
 * @idx : int
 * @n : int
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *x = *head;

	if (idx != 0)
	{
		while (i < idx - 1 && x != NULL)
		{
			x = x->next;
			i++;
			if (x == NULL)
				return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		new->next = x->next;
		x->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
