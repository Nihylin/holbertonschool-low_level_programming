#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: original head node
* @str: new node string
* Return: new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (str == NULL || head == NULL)
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
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
