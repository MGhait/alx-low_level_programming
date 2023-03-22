#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - retruns the natural square root of a number
 * @n: input number
 * Return: on success result on failor -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: int
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
