#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table the user is looking into
 * @key: the key used to retrieve the value
 * Return: value associated with the element or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	hash_node_t *currentNode;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	while (currentNode)
	{
		if (strcmp(key, currentNode->key) == 0)
		{
			value = currentNode->value;
			return (value);
		}

		currentNode = currentNode->next;
	}

	return (NULL);
}
