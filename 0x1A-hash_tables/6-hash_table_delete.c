#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *x;
	unsigned long int compteur = 0;

	while (compteur < ht->size)
	{
		if (ht->array[compteur])
		{
			while (ht->array[compteur])
			{
				x = ht->array[compteur];
				ht->array[compteur] = (ht->array[compteur])->next;
				free(x->key);
				free(x->value);
				free(x);
			}
		}
		compteur++;
	}

	free(ht->array);
	free(ht);
}
