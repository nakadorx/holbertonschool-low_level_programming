#include "lists.h"
/**
 * reverse_listint - check the code for Holberton School students.
 * @head : int
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *y = NULL, *x = NULL;

	while (*head != NULL)
	{
		x = (*head)->next;
		(*head)->next = y;
		y = *head;
		*head = x;
	}
	*head = y;
	return (*head);
}
