#include "main.h"
/**
 * puts2 - prints every cahracter
 *
 * @str: string parameter input
 *
 * Return: noting
 */
void puts2(cahr *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}