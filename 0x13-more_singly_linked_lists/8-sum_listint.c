#include "lists.h"
/**
 * sum_listint - check the code for Holberton School students.
 * @head : int
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
