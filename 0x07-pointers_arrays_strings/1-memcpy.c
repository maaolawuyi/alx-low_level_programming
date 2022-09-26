#include "main.h"
/**
 * _memcpy - a function that copy memory area
 * @n: number of byte to copy
 * @dest: memory area destination to copy
 * @src: memory source to copy from
 * Return: a pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
