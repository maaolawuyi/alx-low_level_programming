#include "main.h"
/**
 * _isalpha - Check for alphabetic character
 * @c: charcrter to be check
 * Return: 1 if c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
