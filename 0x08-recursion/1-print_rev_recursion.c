#include "main.h"
/**
 * print_rev_recursion - prints a string in reverse
 * @s: string input
 * Return: void
 */
void print_rev_recursion(char *s)
{
	print_rev_recursion(s + 1);
	_putchar(*s);
}
