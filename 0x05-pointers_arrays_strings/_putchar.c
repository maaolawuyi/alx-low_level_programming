#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: Character to be print out 
 *
 * Return: 1 on success
 * On error, -1 is return and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
