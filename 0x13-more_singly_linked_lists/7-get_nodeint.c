#include "lists.h"
/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head : int
 * @index : i
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}