#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declering variables*/
	int count = 0;

	if (argc > 0)
	{
		/*While - print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}

	return (0);
}
