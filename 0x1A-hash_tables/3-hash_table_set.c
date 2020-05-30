#include "hash_tables.h"

/**
 * hash_table_set - holberton
 * @ht: int
 * @key: int
 * @value: int
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nx, *tm;
	unsigned long int cmptr;

	if (!ht || !key || !*key || !value)
		return (0);
	cmptr = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[cmptr])
	{
		nx = malloc(sizeof(hash_node_t));
		if (!nx)
			return (0);
		nx->key = strdup(key);
		nx->value = strdup(value);
		nx->next = NULL;
		ht->array[cmptr] = nx;
		return (1);
	}
	tm = ht->array[cmptr];
	while (tm)
	{
		if (strcmp((const char *)key, tm->key) == 0)
		{
			free(tm->value);
			tm->value = strdup(value);
			return (1);
		}
		tm = tm->next;
	}
	if (!tm)
	{
		nx = malloc(sizeof(hash_node_t));
		if (!nx)
			return (0);
		nx->key = strdup(key);
		nx->value = strdup(value);
		nx->next = ht->array[cmptr];
		ht->array[cmptr] = nx;
		return (1);
	}
	return (1);
}
