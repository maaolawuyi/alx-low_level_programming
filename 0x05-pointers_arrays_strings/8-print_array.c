#include <stdio.h>
/**
 * print_array - a function that print n elements of an array of integers,
 * follow by new line
 * @a: inpute array
 * @n: An inpute integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
