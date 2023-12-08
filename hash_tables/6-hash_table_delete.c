#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table being deleted
 * Return: nothing (void)
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *currentNode, *nextNode;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		currentNode = ht->array[index];

		while (currentNode != NULL)
		{
			nextNode = currentNode->next;

			free(currentNode->key);
			free(currentNode->value);
			free(currentNode);

			currentNode = nextNode;
		}
	}
	
	free(ht->array);
	free(ht);
}
