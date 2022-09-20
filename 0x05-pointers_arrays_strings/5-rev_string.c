#include "main.h"
/**
 * rev_string - a function the reverse string
 * follow by new line
 * @s: input character
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char sw;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		sw = s[i];
		s[i++] = s[len];
		s[len] = sw;
	}
}
