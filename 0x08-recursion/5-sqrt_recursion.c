#include "main.h"

int _sqrt_calc(int n, int i);
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: number
 * Return: squrre root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_calc(n, 0)); }

/**
 * _sqrt_calc - calculate the square root of number
 * @n: number
 * @i: iteration
 * Return: if exist the square root of -1 if not
*/

int _sqrt_calc(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_calc(n, i + 1));
}
