#include "main.h"
/**
 * factorial - returs the factoiral of a given number
 * @n: input number
 * Return: number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

