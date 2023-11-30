#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head node
 * @index: given index for the wanted node
 * Return: pointer to the nth node or NULL if the node doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	return (head);
}
