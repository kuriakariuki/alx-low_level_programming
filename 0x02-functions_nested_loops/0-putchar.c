#include <unistd.h>
#include <stdio.h>
/**
 * main - print _putchar to the sreen
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{

	return(write(1,&c, 1));
}
