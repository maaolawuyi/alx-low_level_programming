#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that create an array of chars,
 * and initialises it with a specific char
 * @size: the size of the aray
 * @c: A character to initialized array
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
