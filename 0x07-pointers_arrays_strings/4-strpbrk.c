#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: pointer ot the byte in s that matches one of the bytes i accpet
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
