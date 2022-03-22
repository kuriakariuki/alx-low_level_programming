#include "main.h"

/**
 * int_strlen - a function that returns the length of a string.
 * @s: The string
 * Return: The length of a string
 */
int int_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
