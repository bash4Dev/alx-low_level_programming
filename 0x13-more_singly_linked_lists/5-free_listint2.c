#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Node list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
