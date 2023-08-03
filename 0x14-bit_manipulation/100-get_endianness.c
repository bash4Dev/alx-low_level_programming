#include "main.h"

/**
 * get_endianness - Check endianness
 * Return: If big endian return 0, on little endian return 1.
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *i = (char *) &b;

	return (*i);
}
