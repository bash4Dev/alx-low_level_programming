#include <main.h>

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, k, i;
	char l1, l2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	k = length - 1;
	i = 0;

	while (k > i)
	{
		l1 = s[i];
		l2 = s[k];
		s[i] = l2;
		s[k] = l1;
		k--;
		i++;
	}
}
