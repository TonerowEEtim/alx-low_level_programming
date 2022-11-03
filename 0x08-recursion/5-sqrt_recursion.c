#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @num: the number to find the root
 * @root: the root to test
 * Return: if the number the natural square root - the square root
 * if the number does not have the natural square root - -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
