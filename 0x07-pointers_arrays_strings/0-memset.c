#include "main.h"

/**
 * *_memset - function that fill memory with constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of time to copy
 *
 * Return: to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
