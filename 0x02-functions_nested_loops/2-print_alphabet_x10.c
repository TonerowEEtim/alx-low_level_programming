#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char lwc;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lwc = 'a'; lwc <= 'z'; lwc++)
			_putchar(lwc);

		_putchar('\n');
	}
}
