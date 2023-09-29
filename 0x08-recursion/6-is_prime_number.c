#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - check if number is prime or not
 * @n: number
 * Return: 1 for prime otherways 0
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - tell if prime or not
 * @n: number to be checked
 * @i: number to be iterated
 * Return: 0 or -1
*/

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
