#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: original head node
*/

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
