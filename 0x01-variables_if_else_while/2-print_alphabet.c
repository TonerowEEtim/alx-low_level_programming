#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('c');
	return (0);
}
