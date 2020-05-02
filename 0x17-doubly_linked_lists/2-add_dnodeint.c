#include "lists.h"
/**
* add_dnodeint - holbeton
* @head: int
* @n: int
* Return: 0
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nv;
	dlistint_t *h;

	nv = malloc(sizeof(dlistint_t));
	if (!nv)
		return (NULL);
	nv->n = n;
	nv->prev = NULL;
	h = *head;
	if (h)
	{
		while (h->prev)
			h = h->prev;
	}
	nv->next = h;
	if (h)
		h->prev = nv;
	*head = nv;
	return (nv);
}
