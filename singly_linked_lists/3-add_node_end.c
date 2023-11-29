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
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		/* Si la liste est vide, le nouveau nœud devient le premier nœud */
		*head = newNode;
	}
	else
	{
		/* Initialisation d'un pointeur temporaire pour parcourir la liste */
		temp = *head;

		/* Boucle de recherche du dernier nœud */
		while (temp->next != NULL)
		{
			/* Déplace temp vers le prochain nœud tant qu'il n'atteint pas la fin */
			temp = temp->next;
		}

		/* Une fois le dernier nœud trouvé, le nouveau nœud est ajouté à la fin */
		temp->next = newNode;
	}

	return (newNode);
}
