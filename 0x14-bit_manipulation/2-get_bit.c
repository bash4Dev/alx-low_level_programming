#include "main.h"

/**
 * get_bit - Value of a bit at a given index
 * @n: Decimal parameter
 * @index: Index
 * Return: Return value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bt;

	bt = (n >> index);
	if (index > 32)
	return (-1);
	return (bt & 1);
}
