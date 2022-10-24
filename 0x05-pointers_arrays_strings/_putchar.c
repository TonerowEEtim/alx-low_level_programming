#include <stdio.h>

/**
 * _putchar - character c to stdio
 * @c: character to be outputed
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
