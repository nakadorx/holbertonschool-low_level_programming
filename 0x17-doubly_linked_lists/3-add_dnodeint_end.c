#include "lists.h"
/**
* add_dnodeint_end - aholbeton
* @head: int
* @n: int
* Return: 0
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *nc;

	nc = malloc(sizeof(dlistint_t));
	if (!nc)
		return (NULL);
	nc->n = n;
	nc->next = NULL;
	h = *head;
	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = nc;
	}
	else
		*head = nc;
	nc->prev = h;
	return (nc);
}
