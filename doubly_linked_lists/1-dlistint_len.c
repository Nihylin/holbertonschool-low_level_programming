#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: linked list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodesCount = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		nodesCount++;
	}

	return (nodesCount);
}
