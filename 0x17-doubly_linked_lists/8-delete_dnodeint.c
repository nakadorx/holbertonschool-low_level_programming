#include "lists.h"
/**
* delete_dnodeint_at_index - holbeton
* @head: int
* @index: int
* Return: 0
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int x = 0;

	h1 = *head;
	if (h1)
		while (h1->prev)
			h1 = h1->prev;
	for (; h1; x++)
	{
		if (x == index)
		{
			if (x != 0)
			{
				h2->next = h1->next;
				if (h1->next)
				h1->next->prev = h2;
			}
			else
			{
				*head = h1->next;
				if (*head)
				(*head)->prev = NULL;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
	}
	return (-1);
}
