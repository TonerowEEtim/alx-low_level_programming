#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char ulc;

	for (ulc = 'a'; ulc <= 'z'; ulc++)
		putchar(ulc);

	for (ulc = 'A'; ulc <= 'Z'; ulc++)
		putchar(ulc);

	putchar('\n');

	return (0);
}
