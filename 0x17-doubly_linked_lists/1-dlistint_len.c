#include "lists.h"
/**
* dlistint_len - holbeton
* a double linked list
* @h: int
* Return: 0
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
