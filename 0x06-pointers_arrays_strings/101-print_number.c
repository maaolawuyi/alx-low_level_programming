#include "main.h"
/**
 * print_number - a function that print an integer
 * @n: input integer
 * Return: Nothin
 */
void print_number(int n)
{
	unsigned int abs, abSCount;
	int mult = 1, c = 0, i;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	abSCount = n;
	while (abSCount > n)
	{
		abSCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		mult *= 10;
	for (i = 0; i < c; i++)
	{
		_putchar((abs / mult) + '0');
		abs = abs % mult;
		mult /= 10;
	}
}
