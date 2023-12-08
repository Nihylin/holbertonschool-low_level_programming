#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	if (item == NULL)
	{
		return (0);
	}

	item->key = strdup(key);
	item->value = strdup(value);

	if (item->key == NULL || item->value == NULL)
	{
		free(item->key);
		free(item->value);
		free(item);
		return (0);
	}

	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
