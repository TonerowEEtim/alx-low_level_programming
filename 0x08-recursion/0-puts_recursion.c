#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: print block of memory to be filled
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
