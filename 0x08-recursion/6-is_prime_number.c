/*
 * File: 6-is_prime_number.c
 * Auth: sam tech
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int num);

/**
 * is_divisible - check if a number is divisible
 * @num: the number to be checked
 * @div: divisor
 *
 * Return: if the number is divisible - 0
 * if the number is not divisible - 1
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}
