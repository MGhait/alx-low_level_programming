#include "main.h"

/**
 * _strcat - function that concatenates 2 strings
 * @dest: pointer to destnation input
 * @src: pointer to sourc input
 *
 * Return: pointer to resultion string @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest arrary*/
	while (dest[c])
		c++;

	/*iterate through each ac array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
