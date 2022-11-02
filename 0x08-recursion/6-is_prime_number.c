#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @num: number
 * Return: return 1 prime - return 0 otherwise
 */

int is_prime_number(int num)
{
	int iterator;

	iterator = 2;

	/*Only greater than 2*/
	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (num, iterator);
}
