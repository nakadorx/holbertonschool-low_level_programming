#include "lists.h"
/**
* get_dnodeint_at_index -  holbeton
* nth node of a dlistint_t linked list
* @head: int
* @index: int
* Return: 0
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	if (head)
		return (NULL);
	while (head->prev)
		head = head->prev;
	for (; head; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
