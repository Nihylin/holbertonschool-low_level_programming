#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: linked list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodesCount = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesCount++;
	}

	return (nodesCount);
}
