#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: pointer to the head node
 * Return: sum of all the data of the linked list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
