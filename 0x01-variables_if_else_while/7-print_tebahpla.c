#include <stdio.h>
/**
 * main - prints alphabers in reverse follwed by
 * a new line
 * Return: Always 0 (success)
 */
int main(void)
{

	char n;

	for (n = 'z'; n >= 'a'; --n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
