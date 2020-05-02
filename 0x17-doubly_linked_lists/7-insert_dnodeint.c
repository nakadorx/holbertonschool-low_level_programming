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
/**
* insert_dnodeint_at_index - hobeton
* @h: int
* @idx: int
* @n: int
* Return: 0
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nv;
	dlistint_t *he;
	unsigned int x = 1;

	nv = NULL;
	if (idx == 0)
		nv = add_dnodeint(h, n);
	else
	{
		he = *h;
		if (he)
			while (he->prev)
				he = he->prev;
		for (; he; x++)
		{
			if (x == idx)
			{
				if (!he->next)
				{
					nv = malloc(sizeof(dlistint_t));
					if (nv)
					{
						nv->n = n;
						nv->next = he->next;
						nv->prev = he;
						he->next->prev = nv;
						he->next = nv;
					}
				}
				else
					nv = add_dnodeint_end(h, n);
				break;
			}
			he = he->next;
		}
	}
	return (nv);
}
