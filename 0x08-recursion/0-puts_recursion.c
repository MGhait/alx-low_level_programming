#include "main.h"

/*
 * _puts_recursion - function taht prints a string, followed by a new line
 * @s: pointer to a string
 * Return: void 
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putcahr('\n');
	}
	else 
	{
		_putcahr(*s);
		_puts_recursion(s + 1);
	}
}
