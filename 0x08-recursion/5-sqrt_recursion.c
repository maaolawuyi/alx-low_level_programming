#include "main.h"
int _sqrt();
/**
 * _sqrt_recursion - function that return the value of square root of n
 * @n: input intehger
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
