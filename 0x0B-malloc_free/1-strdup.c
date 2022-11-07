#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - malloc a new string and copy it
 * @str: the string to be copy
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	unsigned int i;

	int count = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		count++;
	}

	count += 1;
	dest = malloc(count * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}

	dest[i] = str[i];

	return (dest);
}
