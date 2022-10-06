#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocate memory using malloc
 * @b: an unsigned input integer
 * Return: a pointer to allocated memory, or NULL if fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
