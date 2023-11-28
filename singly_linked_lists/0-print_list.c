#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: node
 * Return: list linked length
 */

size_t print_list(const list_t *h)
{
	size_t listLen = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		listLen++;
		h = h->next;
	}

	return (listLen);
}
