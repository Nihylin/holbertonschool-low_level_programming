#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: given linked list
 * Return: nothing (void)
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
