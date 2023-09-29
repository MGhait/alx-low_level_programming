#include "main.h"

/**
 * _strlen_recursion - returns lenth of string
 * @s: string
 * Return: lenght
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return 0;
	}
	n++;
	s++;
	return (n + _strlen_recursion(s));
}



