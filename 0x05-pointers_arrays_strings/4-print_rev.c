#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse, 
 * followed by a new line.
 * @s: String to be reversed
 */
void print_rev(char *s)
{
	for (len = 0; s[len]; len++)
	{
		for (i = 0; j=len -1; i < j; i++; j--)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			_putchar('%s', temp);
		}
	}
	_putchar('\n');
}
