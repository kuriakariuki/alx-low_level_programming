#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse,followed by a new line.
 * @s: String to be reversed
 */

void print_rev(char *s)
{
	int i, j, tmp, n;

	n = 0;
	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}
}
