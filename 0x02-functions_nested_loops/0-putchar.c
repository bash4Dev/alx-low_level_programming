#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always void
 */
int main(void)
{
	char print = "_putchar";

	int c;

	for (i = 0; i < 8; i++)
	{
		_putchar(print[i]);
	}
	_putchar('\n');
	return (0);
}
