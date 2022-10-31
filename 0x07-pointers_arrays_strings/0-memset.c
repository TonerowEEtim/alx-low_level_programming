#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointed to be filled
 * @b: constant bytes to be fill
 * @n: number of bytes to the memory
 * Return: the memory to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
