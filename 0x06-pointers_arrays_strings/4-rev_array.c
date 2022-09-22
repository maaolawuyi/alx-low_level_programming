#include "main.h"
/**
 * reverse_array - a function the reverse the content of an array
 * @a: input array
 * @n: number of element of an array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int sw;

	while (i < n--)
	{
		sw = a[i];
		a[i++] = a[n];
		a[n] = sw;
	}
}
