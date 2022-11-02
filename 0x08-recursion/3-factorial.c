#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: pointer to block of momery
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0) /*Base condition*/

		return (1);

	else
		if (n < 0) /*Base condition*/

		return (-1);

	else
		return (n * factorial(n - 1)); /*Recusive call*/
}
