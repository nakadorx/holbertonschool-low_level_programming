#include "lists.h"
/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head : int
 * @index : int
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *x = *head, *next;

	if (index != 0)
	{
		while (i < index - 1 && x != NULL)
		{
			x = x->next;
			i++;
			if (x == NULL || x->next == NULL)
				return (-1);
		}
	}
	next = x->next;
	if (index != 0)
	{
		x->next = next->next;
		free(next);
	}
	else
	{
		free(x);
		*head = next;
	}
	return (1);
}
