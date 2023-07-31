#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tp, *tp2;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = NULL;

	if (*head == NULL)
	{
		*head = tp;
		return (tp);
	}

	tp2 = *head;
	while (tp2->next)
		tp2 = tp2->next;
	tp2->next = tp;
	return (tp);
}
