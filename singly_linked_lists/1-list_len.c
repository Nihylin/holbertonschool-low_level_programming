#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: node
 * Return: linked list length
 */

size_t list_len(const list_t *h)
{
	size_t listLen = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		listLen++;
		h = h->next;
	}

	return (listLen);
}
