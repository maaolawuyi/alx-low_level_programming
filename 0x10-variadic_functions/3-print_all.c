#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "", *str;

	va_list mylist;

	va_start(mylist, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(mylist, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(mylist, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(mylist, double));
					break;
				case 's':
					str = va_arg(mylist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(mylistlist);
}
