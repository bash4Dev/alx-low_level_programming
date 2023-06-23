#include "stdio.h"
/**
 * Description: print alphabet 10 times in lowercase 
 *
 * Return: always 0
 */
void print_alphabet_x10(void) {
	char c;
	char i;

	for (i = 0; i <= 9; i = i + 1)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
