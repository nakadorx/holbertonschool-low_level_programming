#include "lists.h"
/**
* print_dlistint - hobleton
* @h: int
* Return: 0
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	for (; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
