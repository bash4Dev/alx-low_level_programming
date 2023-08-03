#include <unistd.h>

/**
 * _putchar - writes the character ch to stdout
 * @ch: The character to print
 *
 * Return: If works 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
