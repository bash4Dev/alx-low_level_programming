#include "lists.h"

/**
  * list_len - Display the number of elements of a list
  * @h: a linked list
  *
  * Return: The number of elements of a list
  */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
