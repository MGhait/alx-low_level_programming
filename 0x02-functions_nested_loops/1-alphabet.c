#include "main.h"
/**
 * print_alpthaber - print all alphabet in lowercase
 *
 * description: the loop prints the alphabet in lowercase using _putchar function
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
