#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lwc;

	for (lwc = 'a'; lwc <= 'z'; lwc++)
		_putchar(lwc);

	_putchar('\n');
}
