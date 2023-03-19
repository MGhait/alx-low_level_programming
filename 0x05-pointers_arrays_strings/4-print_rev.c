#include "main.h"
/**
 * print_rev - prints reversed writing
 * @s: parameter to the string
 * Return: word
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
