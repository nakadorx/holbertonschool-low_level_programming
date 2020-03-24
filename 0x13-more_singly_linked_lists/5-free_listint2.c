#include "lists.h"
/**
 * free_listint2 - check the code for Holberton School students.
 * @head : int
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *x;

	if (head != NULL)
	{
		x = *head;
		while ((temp = x) != NULL)
		{
			x = x->next;
			free(temp);
		}
		*head = NULL;
	}
}
