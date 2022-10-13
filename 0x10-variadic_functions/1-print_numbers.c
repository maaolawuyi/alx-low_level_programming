#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers
 * @n: number of parameters
 * @...: Other parameter
 * Return: The of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i  = 0;
	int num = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
