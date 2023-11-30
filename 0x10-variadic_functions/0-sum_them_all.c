#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list mylist;

	if (n == 0)
		return (0);

	va_start(mylist, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(mylist, int);

	va_end(mylist);

	return (sum);
}
