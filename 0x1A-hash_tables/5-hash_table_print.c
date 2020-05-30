#include "hash_tables.h"

/**
 * hash_table_print - holberton
 * @ht: int
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int cmpter = 0, lc;
	hash_node_t *x;

	if (!ht)
		return;

	if (!ht->array)
	{
		printf("{}\n");
		return;
	}

	while (cmpter < ht->size)
	{
		if (ht->array[cmpter])
			lc = cmpter;
		cmpter++;
	}

	printf("{");
	cmpter = 0;
	while (cmpter < ht->size)
	{
		if (ht->array[cmpter])
		{
			x = ht->array[cmpter];
			while (x)
			{
				if (!x->next && cmpter == lc)
				{
					printf("\'%s\': \'%s\'}\n", x->key, x->value);
				return;
				}
				printf("\'%s\': \'%s\', ", x->key, x->value);
				x = x->next;
			}
		}
		cmpter++;
	}
}
