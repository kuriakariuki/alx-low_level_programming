#include <stdio.h>
/**
 * main - prints all alphabet except q and e in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
