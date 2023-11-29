#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: original head node
 * @str: new node string
 * Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (!(newNode->str))
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (newNode);
}
