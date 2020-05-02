#include "lists.h"
/**
* sum_dlistint - hobleton
* @head: int
* Return: 0
*/
int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;
		while (head)
		{
			x += head->n;
			head = head->next;
		}
	}
	return (x);
}
