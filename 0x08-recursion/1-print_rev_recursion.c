#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer block of memory
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s) /*if statement*/
	{
		_print_rev_recursion(s + 1); /*add s*/
		_putchar(*s); /*print s*/
	}
}
