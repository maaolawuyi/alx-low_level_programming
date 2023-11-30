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
	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(my_list, int);

	va_end(my_list);

	return (sum);
}
