#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prevNode;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		prevNode = temp;
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	prevNode->next = temp->next;

	if (temp->next != NULL)
	{
		temp->next->prev = prevNode;
	}

	free(temp);
	return (1);
}
