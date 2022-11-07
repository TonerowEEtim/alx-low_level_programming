#include <unistd.h>

/**
 * _putchar - print the xter c to stdout
 * @c: char to be printed
 * Return: 1 on success
 */

int iputchar(char c)
{
	return (write(1, &c, 1));
}
