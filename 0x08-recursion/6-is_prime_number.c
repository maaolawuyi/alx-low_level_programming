#include "main.h"
int is_divisible(int num, int div)


/**
 * is_prime_number - a function that check if a number is prime
 * @n: inpute integer
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - a function that check if num is divisible
 * @num: number to be check
 * @div: result of division
 * Return: i if num divisible, 0 otherwise
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_ivisible(num, div + 1));
}
