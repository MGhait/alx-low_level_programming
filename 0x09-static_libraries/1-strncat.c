#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: mos number of bytes form @src
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	/**
	 * src dose not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
