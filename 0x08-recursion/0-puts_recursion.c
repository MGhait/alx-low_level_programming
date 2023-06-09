#include "main.h"

/*
 * _puts_recursion - Function taht prints a string, followed by a new line
 *
 * Description: string + newling
 * @s: pointer to a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
