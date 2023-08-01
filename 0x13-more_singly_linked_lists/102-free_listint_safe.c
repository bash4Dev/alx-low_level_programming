#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Free a  linked list safely.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t len = 0;
	int diff;
	listint_t *tp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			tp = (*head)->next;
			free(*head);
			*head = tp;
			len++;
		}
		else
		{
			free(*head);
			*head = NULL;
			len++;
			break;
		}
	}

	return (len);
}

