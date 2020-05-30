#include "hash_tables.h"

/**
 * hash_table_get - holberton
 * @ht: int
 * @key: int
 * Return: 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int comptr;
	hash_node_t *tm;

	if (!ht || !key || !*key)
		return (NULL);

	comptr = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[comptr])
		return (NULL);

	tm = ht->array[comptr];

	while (tm)
	{
		if (strcmp((const char *)key, tm->key) == 0)
			return (tm->value);
		tm = tm->next;
	}
	return (NULL);
}
