#include "main.h"

/**
 * _strcat - appends the src string to the dest string.
 * @dest: string to join
 * @src: string to join
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
