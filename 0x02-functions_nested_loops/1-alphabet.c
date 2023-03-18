#include "main.h"

/**
 * print_alpthaber - rint all alphabet in lowercase
 * Description: printing alphaber in lowercase
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
