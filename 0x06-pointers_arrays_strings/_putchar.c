#include <unistd.h>

/**
 * _putcahr - writes the character c to stdout
 * @c: the character to print
 *
 * Retunrn: on success 1
 * On error, -1 is returned, and error is se appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
