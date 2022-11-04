#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - there are digits
 * @str: array str
 * Return: Always 0 (success)
 */

int check_num(char *str)
{
	/*Delering variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*Count string*/
	{
		if (!isdigit(str[count])) /*check if string there are digits*/
		{
			return (0);
		}
	count++;
	}

	return (1);
}
