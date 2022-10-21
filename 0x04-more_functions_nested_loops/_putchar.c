#include <stdio.h>
#include "main.h"

/**
 * _putchar - function that checks for uppercase character
 * @c: The character to print
 * Return: on success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c,-1));
}
