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
	dlistint_t *ha;
	unsigned int x = 1;

	nv = NULL;
	if (idx != 0)
	{
		ha = *h;
		if (ha)
			while (ha->prev)
				ha = ha->prev;
		for (; ha; x++)
		{
			if (x == idx)
			{
				if (!ha->next)
				{
					nv = malloc(sizeof(dlistint_t));
					if (nv)
					{
						nv->n = n;
						nv->next = ha->next;
						nv->prev = ha;
						ha->next->prev = nv;
						ha->next = nv;
					}
				}
				else
					nv = add_dnodeint_end(h, n);
				break;
			}
			ha = ha->next;
		}
	}
	else
		nv = add_dnodeint(h, n);
	return (nv);
}
