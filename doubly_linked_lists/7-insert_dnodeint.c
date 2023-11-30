#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head node
 * @idx: index of the list where the new node should be added
 * @n: value to store in the new node
 * Return: address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *temp = *h;
	unsigned int count = 0;

	if (newNode == NULL || h == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (count < idx - 1)
	{
		temp = temp->next;

		if (temp == NULL)
		{
			return (NULL);
		}
		count++;
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}

