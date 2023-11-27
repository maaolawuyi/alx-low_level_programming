#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if s1 equal s2
 */
int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
=======
        while (*s1 == *s2)
        {
                if (*s1 == '\0')
                {
                        return (0);
                }
                s1++;
                s2++;
        }
        return (*s1 - *s2);
>>>>>>> 51ac89789b9e9625295b2285a13d4bbc3c64e06c
}
