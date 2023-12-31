#include "lists.h"

/**
 * listint_len - Calc number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int ab = 0;

	tp = h;
	while (tp)
	{
		ab++;
		tp = tp->next;
	}
	return (ab);
}
