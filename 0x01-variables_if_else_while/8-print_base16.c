#include <stdio.h>
/**
 * main - prints all numbers of base 16 followed
 * by a new line
 * Return: Always 0 (success)
 */
int main(void)
{

	int h;
	char ch;

	for (h = 48; h < 58; h++)
	{
		putchar(h);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
