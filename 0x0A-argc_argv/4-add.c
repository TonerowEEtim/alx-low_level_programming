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

/**
 * main - prints its name, followed by a new line
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declering variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*Go through the entire array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert str ti int*/
			sum += str_to_int;
		}

	/*Condition if one number of the contain symbol that not digit*/
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
	}

	printf("%d\n", sum); /*Print sum*/

	return (0);
}

