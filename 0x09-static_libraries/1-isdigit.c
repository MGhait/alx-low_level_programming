#include "main.h"

/**
 * _isdigit - check if x is number or not
 *
 * @x: number to be checked
 *
 * Return: 1 if its uppercase, 0 if not
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
