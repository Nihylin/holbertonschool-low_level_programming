#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head node
 * @n: value to store in the new node
 * Return: address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	temp = *head;

	newNode->n = n;
	newNode->next = NULL;

	if (temp == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
		newNode->prev = temp;
	}

	return (newNode);
}
