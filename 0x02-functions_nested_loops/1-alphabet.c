#include "main.h"

/**
 * print_alpthaber - print all alphabet in lowercase
 * Description: printing alphaber in lowercase
 * @parameter: describe the parameter
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
