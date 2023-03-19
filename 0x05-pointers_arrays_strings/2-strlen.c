#include "main.h"
/**
 * _trlen - teturns the length of a string
 *
 * @s: string parameter input
 *
 * Retrun: length of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
