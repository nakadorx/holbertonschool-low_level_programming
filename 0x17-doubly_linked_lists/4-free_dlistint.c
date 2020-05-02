#include "lists.h"
/**
* free_dlistint - holbeton
* @head: int
* Return: 0
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;
	if (head)
		while (head->prev)
			head = head->prev;
	while ((n = head))
	{
		head = head->next;
		free(n);
	}
}
