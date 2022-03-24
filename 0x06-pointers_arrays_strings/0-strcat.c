#include "main.h"
/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte.
 * @dest: string to join
 * @src: string to join
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	_putchar(*dest);
	return (0);
}
