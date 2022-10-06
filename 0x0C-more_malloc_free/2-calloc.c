#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocate memory for an array using malloc
 * @nmemb: number of memory space
 * @size: size of nmemb
 * Return: return pointer to allocated space, or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
